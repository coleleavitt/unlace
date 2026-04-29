__int64 __fastcall sub_385F20(__int64 a1, _QWORD *a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r13
  int v7; // eax
  unsigned int v8; // r15d
  unsigned int v10; // r9d
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // eax
  __int64 v17; // r15
  __int64 v18; // rdi
  __int64 v19; // r13
  __int64 tinfo_size; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rdi
  __int64 v27; // r14
  bool v28; // [rsp+Fh] [rbp-69h]
  __int64 tinfo_property; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v30[9]; // [rsp+30h] [rbp-48h] BYREF

  v30[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 == 1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v4 + 8);
    if ( v7 != 61 )
      goto LABEL_8;
    v4 = sub_24F9F0(a4 + 16, *(_QWORD *)(a1 + 8));
    if ( *(_DWORD *)(v4 + 8) == 58 )
    {
      while ( *(_DWORD *)(*(_QWORD *)(v4 + 32) + 8LL) == 61 )
      {
        v4 = *(_QWORD *)(v4 + 24);
        v7 = *(_DWORD *)(v4 + 8);
LABEL_8:
        if ( v7 != 58 )
        {
          if ( (unsigned int)(v7 - 59) > 1 )
            return 0;
          v30[0] = 0;
          v30[0] = get_tinfo_property(*(_QWORD *)(v4 + 48), 289);
          tinfo_property = get_tinfo_property(v30[0], 10);
          clear_tinfo_t(v30);
          v28 = (get_tinfo_property(tinfo_property, 2) & 0x3F) == 29;
          LOBYTE(v10) = v28 && a2 == nullptr;
          v8 = v10;
          if ( (_BYTE)v10 )
          {
            clear_tinfo_t(&tinfo_property);
            return 1;
          }
          else
          {
            clear_tinfo_t(&tinfo_property);
            while ( 1 )
            {
              v11 = *(_QWORD *)(v4 + 24);
              if ( *(_DWORD *)(v11 + 8) == 58 )
                break;
LABEL_15:
              tinfo_property = 0;
              tinfo_property = get_tinfo_property(*(_QWORD *)(v11 + 48), 10);
              if ( (get_tinfo_property(tinfo_property, 2) & 0x3F) == 0x1D )
              {
                if ( !a2 )
                {
                  v8 = 1;
                  clear_tinfo_t(&tinfo_property);
                  return v8;
                }
                v28 = 1;
              }
              if ( (unsigned int)(*(_DWORD *)(v11 + 8) - 59) > 1 )
                goto LABEL_22;
              v30[0] = 0;
              v30[0] = get_tinfo_property(*(_QWORD *)(v11 + 48), 289);
              if ( (get_tinfo_property(v30[0], 2) & 0x2F) != 0xD )
              {
                clear_tinfo_t(v30);
LABEL_22:
                clear_tinfo_t(&tinfo_property);
                if ( a3 )
                  *a3 = *(_QWORD *)(v4 + 24);
                v12 = *(_DWORD *)(v4 + 8);
                if ( v12 == 60 )
                {
                  v22 = *(_QWORD *)(v4 + 24);
                  v30[0] = 0;
                  v30[0] = get_tinfo_property(*(_QWORD *)(v22 + 48), 10);
                  v13 = 0;
                  if ( (get_tinfo_property(v30[0], 2) & 0x3F) == 0xD )
                    v13 = *(unsigned int *)(v4 + 32);
                  clear_tinfo_t(v30);
                }
                else
                {
                  v13 = 0;
                  if ( v12 == 59 )
                    v4 = *(_QWORD *)(v4 + 24);
                }
                v14 = a4 + 16;
                while ( 1 )
                {
                  v15 = sub_24F9F0(v14, v4);
                  v16 = *(_DWORD *)(v15 + 8);
                  if ( v16 == 60 )
                    break;
                  if ( v16 != 59 )
                  {
                    if ( v16 == 57 )
                    {
                      if ( (*(_BYTE *)(v15 + 56) & 2) != 0 )
                      {
                        v23 = sub_2869B0(*(_QWORD *)(v15 + 24));
                        if ( v23 != -1 )
                          v13 += v23;
                      }
                    }
                    else if ( v16 == 52 )
                    {
                      v24 = sub_24F9F0(v14, v15);
                      v25 = v24;
                      if ( *(_DWORD *)(v24 + 8) == 48 )
                        v25 = sub_24F9F0(v14, v24);
                      if ( *(_DWORD *)(v25 + 8) == 35 )
                      {
                        v26 = *(_QWORD *)(v25 + 32);
                        if ( *(_DWORD *)(v26 + 8) == 61 )
                        {
                          v27 = sub_27A6E0(v26);
                          v13 += v27 * (int)get_tinfo_property(*(_QWORD *)(v25 + 48), 14);
                        }
                      }
                    }
                    break;
                  }
                  if ( (get_tinfo_property(*(_QWORD *)(v4 + 48), 2) & 0x3F) == 0xD )
                    v13 += *(unsigned int *)(v15 + 32);
                  if ( (get_tinfo_property(*(_QWORD *)(v15 + 48), 2) & 0xF) == 0xB )
                  {
                    v15 = sub_24F9F0(v14, v15);
                    if ( *(_DWORD *)(v15 + 8) == 58 )
                    {
                      v17 = 0;
                      while ( 1 )
                      {
                        v18 = *(_QWORD *)(v15 + 32);
                        if ( *(_DWORD *)(v18 + 8) != 61 )
                          break;
                        v19 = sub_27A6E0(v18);
                        tinfo_size = get_tinfo_size(0, *(_QWORD *)(v15 + 48), 0);
                        if ( tinfo_size == -1 )
                          break;
                        v17 += v19 * tinfo_size;
                        v21 = sub_24F9F0(v14, v15);
                        if ( *(_DWORD *)(v21 + 8) != 58 )
                        {
                          v13 += v17;
                          goto LABEL_33;
                        }
                        v15 = v21;
                      }
                    }
                    return 0;
                  }
LABEL_33:
                  if ( (get_tinfo_property(*(_QWORD *)(v15 + 48), 2) & 0x3F) == 0x1D )
                  {
                    if ( !a2 )
                      return 1;
                    v28 = 1;
                  }
                  v4 = v15;
                }
                if ( a2 && v28 )
                {
                  *a2 = v13;
                  return 1;
                }
                return v28;
              }
              v4 = v11;
              clear_tinfo_t(v30);
              clear_tinfo_t(&tinfo_property);
            }
            while ( *(_DWORD *)(*(_QWORD *)(v11 + 32) + 8LL) == 61 )
            {
              v11 = *(_QWORD *)(v11 + 24);
              if ( *(_DWORD *)(v11 + 8) != 58 )
                goto LABEL_15;
            }
          }
          return v8;
        }
      }
    }
  }
  return 0;
}
