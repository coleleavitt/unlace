__int64 __fastcall sub_6584F0(__int64 a1, char **a2, char a3, double a4, double a5)
{
  char *v5; // rax
  char v7; // al
  unsigned int v8; // edx
  char *v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rdi
  char v14; // [rsp+3h] [rbp-8Dh] BYREF
  unsigned int v15; // [rsp+4h] [rbp-8Ch] BYREF
  char *v16; // [rsp+8h] [rbp-88h] BYREF
  void *ptr; // [rsp+10h] [rbp-80h] BYREF
  __int128 v18; // [rsp+18h] [rbp-78h]
  __int64 v19; // [rsp+30h] [rbp-60h] BYREF
  int v20; // [rsp+38h] [rbp-58h] BYREF
  _QWORD *v21; // [rsp+40h] [rbp-50h]
  int *v22; // [rsp+48h] [rbp-48h]
  int *v23; // [rsp+50h] [rbp-40h]
  __int64 v24; // [rsp+58h] [rbp-38h]
  unsigned __int64 v25; // [rsp+68h] [rbp-28h]

  v5 = *a2;
  v25 = __readfsqword(0x28u);
  v15 = 0;
  v16 = v5 + 1;
  v7 = *v5;
  v8 = 0;
  if ( (v7 & 0xF) == 0xD )
  {
    v14 = 0;
    if ( (v7 & 0x3F) != 0x3D && ((unsigned int)sub_6B38E0(&v16, &v14) || v14) )
      return v15;
    ptr = nullptr;
    v18 = 0;
    if ( !(unsigned __int8)sub_567540((__int64)&ptr, &v16) )
    {
LABEL_12:
      if ( ptr )
      {
        *(_QWORD *)&v18 = 0;
        qfree(ptr);
      }
      return v15;
    }
    v11 = (char *)haystack;
    if ( (_QWORD)v18 )
      v11 = (char *)ptr;
    if ( (unsigned __int8)sub_6B3A20(a1, v11, &v15) != 1 && a3 )
    {
      v12 = *(_QWORD *)(a1 + 8);
      LODWORD(v19) = 0;
      sub_64F830(a1, v12, v11, 3, nullptr, 0, 0, 0, 0, (unsigned int *)&v19);
      v15 = v19;
      if ( (_DWORD)v19 )
      {
LABEL_16:
        *a2 = v16;
        goto LABEL_12;
      }
      v13 = *(_QWORD *)(a1 + 8);
      v20 = 0;
      v21 = nullptr;
      v22 = &v20;
      v23 = &v20;
      v24 = 0;
      v15 = sub_6577B0(v13, v13, v11, &v19, 0, 0.0, a5);
      sub_6492F0(v21);
    }
    if ( !v15 )
      goto LABEL_12;
    goto LABEL_16;
  }
  return v8;
}
