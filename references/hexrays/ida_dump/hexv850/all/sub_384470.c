__int64 __fastcall sub_384470(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, double a5)
{
  unsigned __int8 *v7; // rdi
  unsigned int v8; // ebx
  int v10; // eax
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // [rsp+0h] [rbp-B8h]
  unsigned int v17; // [rsp+0h] [rbp-B8h]
  unsigned int v18; // [rsp+0h] [rbp-B8h]
  char v19; // [rsp+Ch] [rbp-ACh]
  unsigned __int8 *v20; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-98h] BYREF
  int v22; // [rsp+28h] [rbp-90h]
  __int64 v23; // [rsp+30h] [rbp-88h]
  __int128 v24; // [rsp+38h] [rbp-80h]
  __int64 v25; // [rsp+48h] [rbp-70h]
  __int128 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+60h] [rbp-58h]
  unsigned int v28; // [rsp+68h] [rbp-50h]
  unsigned int v29; // [rsp+6Ch] [rbp-4Ch]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v7 = (unsigned __int8 *)a2;
  v8 = 0;
  v30 = __readfsqword(0x28u);
  v20 = (unsigned __int8 *)a2;
  if ( a2 )
  {
    while ( 1 )
    {
      v10 = *v7;
      v11 = (unsigned int)(v10 - 1);
      if ( (unsigned __int8)(v10 - 1) <= 1u )
      {
LABEL_9:
        if ( (_BYTE)v10 == 1 && v7[1] == 40 )
        {
          v21 = -1;
          addr_from_tag(&v21, v7);
          a2 = v21;
          if ( (v21 & 0xC0000000) == 0 )
          {
            v13 = sub_3843F0(a1, v21, a5);
            if ( v13 )
            {
              v16 = v13;
              v21 = *(_QWORD *)v13;
              v22 = *(_DWORD *)(v13 + 8);
              v19 = sub_252AE0(a1, (unsigned __int64 *)&v21);
              if ( (get_merge_state(a1, &v21, v14, v15) & 3) != 0 || (v19 & 1) == 0 )
              {
                a2 = v8;
                result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a4 + 8LL))(
                           a4,
                           v8,
                           a3,
                           v16);
              }
              else
              {
                a5 = 0.0;
                a2 = v16;
                v21 = (__int64)&off_4B9F78;
                v22 = 0;
                v23 = 0;
                v25 = 0;
                v27 = a4;
                v28 = v8;
                v29 = a3;
                v24 = 0;
                v26 = 0;
                result = sub_2506C0(&v21, v16, 0);
                v21 = (__int64)off_4AF6D8;
                if ( v25 )
                {
                  v17 = result;
                  *(_QWORD *)&v26 = 0;
                  qfree(v25);
                  result = v17;
                }
                if ( v23 )
                {
                  v18 = result;
                  *(_QWORD *)&v24 = 0;
                  qfree(v23);
                  result = v18;
                }
              }
              if ( (_DWORD)result )
                return result;
            }
          }
          v7 = v20;
        }
      }
      else
      {
        while ( (_BYTE)v10 != 4 )
        {
          if ( (_BYTE)v10 == 3 )
          {
            v20 = v7 + 1;
            LOBYTE(v10) = v7[1];
          }
          if ( !(_BYTE)v10 || (unsigned int)get_utf8_char(&v20) - 1 > 0xFFFFFFFD )
            return 0;
          v7 = v20;
          ++v8;
          v10 = *v20;
          v11 = (unsigned int)(v10 - 1);
          if ( (unsigned __int8)(v10 - 1) <= 1u )
            goto LABEL_9;
        }
      }
      v20 = (unsigned __int8 *)tag_skipcode(v7, a2, v11);
      v7 = v20;
    }
  }
  return 0;
}
