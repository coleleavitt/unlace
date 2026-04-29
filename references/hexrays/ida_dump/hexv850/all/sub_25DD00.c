unsigned __int64 __fastcall sub_25DD00(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  void (**v7)(_QWORD, _QWORD, const char *, ...); // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // r15
  const char *v13; // r14
  __int16 *v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  char *v17; // rax
  char v18; // dl
  char *v20; // [rsp+10h] [rbp-78h] BYREF
  __int128 v21; // [rsp+18h] [rbp-70h]
  __int16 v22; // [rsp+30h] [rbp-58h] BYREF
  char v23; // [rsp+32h] [rbp-56h] BYREF
  char v24; // [rsp+44h] [rbp-44h] BYREF
  __int16 v25; // [rsp+45h] [rbp-43h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]

  v7 = *(void (***)(_QWORD, _QWORD, const char *, ...))a2;
  v26 = __readfsqword(0x28u);
  if ( !((unsigned __int8 (__fastcall *)(__int64))v7[1])(a2) )
  {
    v9 = *(_QWORD *)(a2 + 40);
    if ( v9 )
    {
      v10 = sub_251F30(v9, a1);
      v11 = *(_QWORD *)(a2 + 40);
      v12 = v10;
      v20 = (char *)*sub_251F30(v11, v10);
      LODWORD(v21) = 75 - a4;
      v13 = sub_252730(v11, (unsigned __int64 *)&v20, 0);
      if ( v13 )
      {
        v14 = &v22;
        if ( !a4 )
        {
          v14 = (__int16 *)&v23;
          v22 = 1028;
        }
        v15 = *((int *)v12 + 4);
        v20 = nullptr;
        v21 = 0;
        tag_addr(&v20, v15 | 0x20000000, 0);
        if ( v14 >= &v25 )
        {
          if ( !under_debugger )
            sub_37CFE0(520);
          BUG();
        }
        v16 = (unsigned __int64)v20;
        v17 = v20;
        while ( 1 )
        {
          v18 = *v17++;
          *(_BYTE *)v14 = v18;
          if ( !v18 )
            break;
          v14 = (__int16 *)((char *)v14 + 1);
          if ( v14 == (__int16 *)&v24 )
          {
            v24 = 0;
            break;
          }
        }
        if ( v16 )
        {
          *(_QWORD *)&v21 = 0;
          qfree(v16);
        }
        *(_BYTE *)v14 = 0;
        sub_25A1B0((void (***)(_QWORD, _QWORD, const char *, ...))a2, a3, (const char *)&v22, v13);
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}
