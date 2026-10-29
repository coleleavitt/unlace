void __fastcall sub_227B600(int *a1)
{
  char *v1; // rdx
  char *v2; // rsi
  unsigned int v3; // eax
  bool v4; // zf
  void *v5; // rdi
  __int64 v6; // rdx
  _BYTE v7[32]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v9; // [rsp+40h] [rbp-18h]

  *(_QWORD *)a1 = &off_2BEBDE8;
  if ( a1[12] < 0 )
    goto LABEL_5;
  v1 = *((char **)a1 + 4);
  v2 = *((char **)a1 + 2);
  if ( v2 != v1 )
  {
    *((_QWORD *)a1 + 4) = v2;
    sub_227B200((__int64)a1, v2, v1 - v2);
  }
  if ( *((_BYTE *)a1 + 52) && (v3 = sub_2290B30(a1[12])) != 0 )
  {
    a1[18] = v3;
    *((_QWORD *)a1 + 10) = v6;
  }
  else
  {
LABEL_5:
    v3 = a1[18];
  }
  if ( v3 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(**((_QWORD **)a1 + 10) + 32LL))(v7, *((_QWORD *)a1 + 10), v3);
    v8[2] = v7;
    v8[0] = "IO failure on output stream: ";
    v9 = 1027;
    sub_2221CD0((__int64)v8);
  }
  v4 = a1[11] == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v4 )
  {
    v5 = *((void **)a1 + 2);
    if ( v5 )
      operator delete[](v5);
  }
}
