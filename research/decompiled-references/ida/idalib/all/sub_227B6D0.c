void __fastcall sub_227B6D0(int *a1)
{
  char *v2; // rdx
  char *v3; // rsi
  unsigned int v4; // eax
  bool v5; // zf
  void *v6; // rdi
  __int64 v7; // rdx
  _BYTE v8[32]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v9[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+40h] [rbp-18h]

  *(_QWORD *)a1 = &off_2BEBDE8;
  if ( a1[12] < 0 )
    goto LABEL_5;
  v2 = *((char **)a1 + 4);
  v3 = *((char **)a1 + 2);
  if ( v2 != v3 )
  {
    *((_QWORD *)a1 + 4) = v3;
    sub_227B200((__int64)a1, v3, v2 - v3);
  }
  if ( *((_BYTE *)a1 + 52) && (v4 = sub_2290B30(a1[12])) != 0 )
  {
    a1[18] = v4;
    *((_QWORD *)a1 + 10) = v7;
  }
  else
  {
LABEL_5:
    v4 = a1[18];
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(**((_QWORD **)a1 + 10) + 32LL))(v8, *((_QWORD *)a1 + 10), v4);
    v9[2] = v8;
    v9[0] = "IO failure on output stream: ";
    v10 = 1027;
    sub_2221CD0((__int64)v9);
  }
  v5 = a1[11] == 1;
  *(_QWORD *)a1 = &unk_2C76210;
  if ( v5 )
  {
    v6 = *((void **)a1 + 2);
    if ( v6 )
      operator delete[](v6);
  }
  operator delete(a1, 0x60u);
}
