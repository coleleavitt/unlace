__int64 __fastcall sub_3EB9D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rsi
  unsigned int v8; // r12d
  unsigned __int64 v9; // r15
  char *v10; // r14
  char *v11; // rax
  char *v12; // rdi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  bool v16; // cl
  unsigned __int64 v17; // rax
  void (__fastcall *v18)(__int64, char *, __int64); // rax
  char *v19; // rdi
  unsigned __int64 v21; // [rsp+0h] [rbp-68h]
  char *s; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v3 = *(_DWORD *)(a1 + 16);
  if ( v3 == -1 )
    return 0;
  v4 = *(_QWORD *)(qword_2CA1698 + 1480);
  v5 = sub_3B9AA0(v4, v3, 4) & 0x600;
  if ( v5 == 1024 )
    return 0;
  if ( v5 != 1536 )
  {
    v6 = sub_4EE820(v4 + 1552, *(unsigned int *)(a1 + 16));
    if ( !v6 || (*(_BYTE *)(v6 + 22) & 1) == 0 && *(_BYTE *)(v6 + 96) != 2 )
      return 0;
  }
  v7 = *(unsigned int *)(a1 + 16);
  v23 = 0;
  s = nullptr;
  v8 = generate_disasm_line(&s, v7, 5);
  if ( (_BYTE)v8 )
  {
    if ( !(_QWORD)v23 )
    {
      v18 = *(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 56LL);
      goto LABEL_29;
    }
    v21 = v23;
    v9 = v23 - 1;
    v10 = s;
    v11 = strchr(s, 32);
    v12 = v11;
    if ( v11 )
    {
      v13 = v11 - v10;
      if ( v11 - v10 != -1 )
      {
        if ( v13 >= v21 )
        {
          v16 = v8;
          v15 = -1;
        }
        else
        {
          v14 = v11 - v10;
          do
          {
            if ( v10[v14] != 32 )
              break;
            ++v14;
          }
          while ( v14 < v21 );
          v15 = v14 - v13 - 1;
          v16 = v15 != 0;
        }
        if ( v13 < v9 && v16 )
        {
          v17 = v13 + v15;
          if ( v17 < v9 )
          {
            v13 += v9 - v17;
            memmove(v12, &v10[v17], v9 - v17);
            v10 = s;
          }
          if ( *((_QWORD *)&v23 + 1) < v13 + 1 )
          {
            s = (char *)qvector_reserve(&s, v10, v13 + 1, 1);
            v10 = s;
          }
          *(_QWORD *)&v23 = v13 + 1;
          v10[v13] = 0;
          v18 = *(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 56LL);
          if ( (_QWORD)v23 )
          {
            v18(a2, s, 5);
            goto LABEL_23;
          }
LABEL_29:
          v18(a2, (char *)haystack, 5);
          v19 = s;
          if ( !s )
            return v8;
          goto LABEL_24;
        }
      }
    }
    (*(void (__fastcall **)(__int64, char *, __int64))(*(_QWORD *)a2 + 56LL))(a2, v10, 5);
  }
LABEL_23:
  v19 = s;
  if ( s )
  {
LABEL_24:
    *(_QWORD *)&v23 = 0;
    qfree(v19);
  }
  return v8;
}

