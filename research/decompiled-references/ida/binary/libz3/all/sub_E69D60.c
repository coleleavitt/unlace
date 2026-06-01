__int64 __fastcall sub_E69D60(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rdx
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // r15
  _DWORD *v8; // rdx
  bool v9; // zf
  _DWORD *v10; // rax
  __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 *v13; // r13
  int v14; // ebx
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  _BYTE *v17; // rdi
  char *v18; // rsi
  char *v19; // rdx
  __int64 v20; // rcx
  char v21; // al
  int v22; // edx
  _QWORD *v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rdx
  _DWORD *v27; // rax
  __int64 v28; // r12
  char *v29; // rax
  char *v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rsi
  _DWORD *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // r10
  unsigned __int8 v38; // [rsp+0h] [rbp-E8h]
  _QWORD *v39; // [rsp+8h] [rbp-E0h]
  __int64 v40; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v41; // [rsp+18h] [rbp-D0h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h]
  __int64 v43; // [rsp+28h] [rbp-C0h]
  _BYTE v44[184]; // [rsp+30h] [rbp-B8h] BYREF

  if ( *(_WORD *)(a2 + 4) )
    return 0;
  v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v2 )
    return 0;
  if ( *v2
    || (result = 0, v2[1] == 8)
    && *(_DWORD *)(a2 + 24) == 1
    && (a2 = *(_QWORD *)(a2 + 32), !*(_WORD *)(a2 + 4))
    && (v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL)) != nullptr )
  {
    result = 0;
    if ( *v2 == 5 )
    {
      v5 = v2[1];
      if ( (v5 == 2 || v5 == 3) && *(_DWORD *)(a2 + 24) == 2 )
      {
        v6 = *(_QWORD *)(a2 + 40);
        v7 = *(_QWORD *)(a2 + 32);
        if ( *(_WORD *)(v6 + 4) )
        {
          return 0;
        }
        else
        {
          v8 = *(_DWORD **)(*(_QWORD *)(v6 + 16) + 24LL);
          result = 0;
          if ( v8 && *v8 == 5 && !v8[1] )
          {
            v9 = *(_WORD *)(v7 + 4) == 0;
            v40 = *(_QWORD *)(a2 + 32);
            if ( !v9 || (v10 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr || *v10 != 5 || v10[1] != 6 )
            {
              v11 = &v40;
              ptr = v44;
              v43 = 0x1000000000LL;
              v12 = 1;
LABEL_18:
              v13 = &v11[v12];
              v14 = 1;
              while ( 1 )
              {
                if ( !*(_WORD *)(v7 + 4)
                  && (v15 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) != nullptr
                  && *v15 == 5
                  && v15[1] == 9
                  && *(_DWORD *)(v7 + 24) == 2
                  && (v33 = *(_QWORD *)(v7 + 32),
                      v34 = *(_QWORD *)(v7 + 40),
                      v9 = *(_WORD *)(v33 + 4) == 0,
                      v41 = v34,
                      v9)
                  && (v35 = *(_DWORD **)(*(_QWORD *)(v33 + 16) + 24LL)) != nullptr
                  && *v35 == 5
                  && !v35[1]
                  && (unsigned __int8)sub_E68690(a1, v34, &v41) )
                {
                  v7 = v41;
                }
                else
                {
                  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 8) + 16LL))(
                          *(_QWORD *)(a1 + 8),
                          v7) )
                  {
                    if ( *(_WORD *)(v7 + 4)
                      || (v16 = *(_DWORD **)(*(_QWORD *)(v7 + 16) + 24LL)) == nullptr
                      || *v16 != 5
                      || v16[1] != 18
                      || !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 16LL))(
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(v7 + 32)) )
                    {
LABEL_26:
                      result = 0;
                      goto LABEL_27;
                    }
                    v7 = *(_QWORD *)(v7 + 32);
                  }
                  v41 = v7;
                }
                v21 = *(_BYTE *)(v7 + 6);
                if ( (v21 & 2) != 0 )
                  goto LABEL_26;
                *(_BYTE *)(v7 + 6) = v21 | 2;
                v22 = v43;
                if ( (unsigned int)v43 >= HIDWORD(v43) )
                {
                  v28 = (unsigned int)(2 * HIDWORD(v43));
                  v29 = (char *)sub_186B270(8 * v28);
                  v22 = v43;
                  v30 = (char *)ptr;
                  v23 = v29;
                  if ( (_DWORD)v43 )
                  {
                    if ( (unsigned int)(v43 - 1) <= 2 || v29 == (char *)ptr + 8 )
                    {
                      v36 = 0;
                      v37 = 8LL * (unsigned int)v43;
                      do
                      {
                        v23[v36 / 8] = *(_QWORD *)&v30[v36];
                        v36 += 8LL;
                      }
                      while ( v37 != v36 );
                    }
                    else
                    {
                      v31 = 0;
                      v32 = 16LL * ((unsigned int)v43 >> 1);
                      do
                      {
                        *(__m128i *)&v23[v31 / 8] = _mm_loadu_si128((const __m128i *)&v30[v31]);
                        v31 += 16LL;
                      }
                      while ( v31 != v32 );
                      if ( (v22 & 1) != 0 )
                        v23[v22 & 0xFFFFFFFE] = *(_QWORD *)&v30[8 * (v22 & 0xFFFFFFFE)];
                    }
                  }
                  if ( v30 && v30 != v44 )
                  {
                    v39 = v23;
                    sub_186B220(v30);
                    v22 = v43;
                    v23 = v39;
                  }
                  ptr = v23;
                  HIDWORD(v43) = v28;
                }
                else
                {
                  v23 = ptr;
                }
                v23[v22] = v7;
                v24 = *(_DWORD *)(v7 + 16);
                v25 = *(_QWORD *)(a1 + 688);
                LODWORD(v43) = v22 + 1;
                v26 = v24 >> 5;
                if ( !v25 || (unsigned int)v26 >= *(_DWORD *)(v25 - 4) || (*(_DWORD *)(v25 + 4 * v26) & (1 << v24)) == 0 )
                {
                  if ( *(_BYTE *)(a1 + 728) && (v27 = *(_DWORD **)(sub_15D1F10(v7) + 24)) != nullptr && *v27 == 5 )
                  {
                    LOBYTE(v27) = v27[1] == 1;
                    v14 &= (unsigned int)v27;
                  }
                  else
                  {
                    v14 = 0;
                  }
                }
                if ( v13 == ++v11 )
                  goto LABEL_77;
                v7 = *v11;
              }
            }
            v12 = *(unsigned int *)(v7 + 24);
            ptr = v44;
            v14 = 1;
            v43 = 0x1000000000LL;
            if ( (_DWORD)v12 )
            {
              v11 = (__int64 *)(v7 + 32);
              v7 = *(_QWORD *)(v7 + 32);
              goto LABEL_18;
            }
LABEL_77:
            result = v14 ^ 1u;
LABEL_27:
            v17 = ptr;
            v18 = (char *)ptr + 8 * (unsigned int)v43;
            v19 = (char *)ptr;
            if ( ptr != v18 )
            {
              do
              {
                v20 = *(_QWORD *)v19;
                v19 += 8;
                *(_BYTE *)(v20 + 6) &= ~2u;
              }
              while ( v18 != v19 );
            }
            LODWORD(v43) = 0;
            if ( v17 != v44 )
            {
              if ( v17 )
              {
                v38 = result;
                sub_186B220(v17);
                return v38;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

