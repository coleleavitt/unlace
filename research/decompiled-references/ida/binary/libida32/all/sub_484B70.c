unsigned __int64 __fastcall sub_484B70(__int64 a1, __int64 a2)
{
  int v2; // eax
  _QWORD *v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rdx
  char v7; // r13
  __int64 v8; // rbp
  char *v10; // r15
  __int64 v11; // rax
  __int64 v12; // rsi
  char v13; // [rsp+8h] [rbp-90h]
  __int64 v14; // [rsp+18h] [rbp-80h] BYREF
  char *v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+28h] [rbp-70h]
  __int128 v17; // [rsp+38h] [rbp-60h]
  __int64 v18; // [rsp+48h] [rbp-50h]
  int v19; // [rsp+50h] [rbp-48h]
  unsigned __int64 v20; // [rsp+58h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 176) )
  {
    v2 = *(_DWORD *)(a1 + 400);
    if ( (v2 & 2) == 0 && (*(_BYTE *)(a1 + 184) & 0x2F) == 0xD && (v2 & 1) != 0 )
    {
      v4 = *(_QWORD **)(switch_dbctx(*(int *)(a2 + 8)) + 1480);
      v19 = 1;
      v18 = 0;
      v5 = *(unsigned int *)(a2 + 12);
      v16 = 0;
      v17 = 0;
      v6 = v4[1];
      v15 = nullptr;
      sub_4835B0(a1, v5, v6);
      v7 = sub_47F2B0((_QWORD *)a1, (__int64)&v15, 0);
      if ( !v7 )
      {
        v13 = sub_47F2B0((_QWORD *)a1, (__int64)&v15, 0x80u);
        if ( v13 )
        {
          if ( (_QWORD)v16 == *(_QWORD *)(a1 + 224) )
          {
            v8 = v16 - 1;
            if ( (__int64)v16 - 1 < 0 )
              goto LABEL_19;
            do
            {
              v10 = &v15[128 * v8];
              if ( (get_tinfo_property(*((_QWORD *)v10 + 8), 2) & 0xF) != 0xE
                && (unsigned int)verify_tinfo(*((_QWORD *)v10 + 8)) )
              {
                v11 = *(_QWORD *)(a1 + 216) + 16 * v8;
                *((_DWORD *)v10 + 29) = *(_DWORD *)(v11 + 8);
                v10[120] = *(_BYTE *)(v11 + 12);
                sub_483D30((_QWORD *)a1, v4, &v15, v8);
                v7 = v13;
              }
            }
            while ( v8-- != 0 );
            if ( v7 )
            {
              v12 = *(unsigned __int8 *)(a1 + 184);
              v14 = 0;
              if ( (unsigned __int8)create_tinfo(&v14, v12, 13, &v15) )
              {
                sub_4816A0((__int64 *)a1, v4[1], *(_DWORD *)(a1 + 176), (__int64)&v14);
                clear_tinfo_t(&v14);
                goto LABEL_18;
              }
              if ( !under_debugger )
                interr(2349);
            }
            else
            {
LABEL_19:
              if ( !under_debugger )
                interr(2348);
            }
          }
          else if ( !under_debugger )
          {
            interr(2347);
          }
        }
        else if ( !under_debugger )
        {
          interr(2936);
        }
        BUG();
      }
LABEL_18:
      sub_37B290(&v15);
    }
  }
  return v20 - __readfsqword(0x28u);
}

