unsigned __int64 __fastcall sub_2630C0(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  void (**v6)(_QWORD, _QWORD, const char *, ...); // rax
  __int64 v8; // rdi
  _QWORD *v9; // rax
  __int64 v10; // rbx
  const char *v11; // r14
  __int16 *v12; // rbx
  unsigned __int64 v13; // rdi
  char *v14; // rax
  char v15; // dl
  char *v17; // [rsp+10h] [rbp-78h] BYREF
  __int128 v18; // [rsp+18h] [rbp-70h]
  __int16 v19; // [rsp+30h] [rbp-58h] BYREF
  char v20; // [rsp+32h] [rbp-56h] BYREF
  char v21; // [rsp+44h] [rbp-44h] BYREF
  __int16 v22; // [rsp+45h] [rbp-43h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-40h]

  v6 = *(void (***)(_QWORD, _QWORD, const char *, ...))a2;
  v23 = __readfsqword(0x28u);
  if ( !((unsigned __int8 (__fastcall *)(__int64))v6[1])(a2) )
  {
    v8 = *(_QWORD *)(a2 + 40);
    if ( v8 )
    {
      v9 = sub_2572F0(v8, a1);
      v10 = *(_QWORD *)(a2 + 40);
      v17 = (char *)*sub_2572F0(v10, v9);
      LODWORD(v18) = 75 - a4;
      v11 = sub_257AF0(v10, (unsigned __int64 *)&v17, 0);
      if ( v11 )
      {
        v12 = &v19;
        if ( !a4 )
        {
          v12 = (__int16 *)&v20;
          v19 = 1028;
        }
        v17 = nullptr;
        v18 = 0;
        tag_addr();
        if ( v12 >= &v22 )
        {
          if ( !under_debugger )
            sub_383060(520);
          BUG();
        }
        v13 = (unsigned __int64)v17;
        v14 = v17;
        while ( 1 )
        {
          v15 = *v14++;
          *(_BYTE *)v12 = v15;
          if ( !v15 )
            break;
          v12 = (__int16 *)((char *)v12 + 1);
          if ( v12 == (__int16 *)&v21 )
          {
            v21 = 0;
            break;
          }
        }
        if ( v13 )
        {
          *(_QWORD *)&v18 = 0;
          qfree();
        }
        *(_BYTE *)v12 = 0;
        sub_25F570((void (***)(_QWORD, _QWORD, const char *, ...))a2, a3, (const char *)&v19, v11);
      }
    }
  }
  return v23 - __readfsqword(0x28u);
}
