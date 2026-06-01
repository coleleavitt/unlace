__int64 __fastcall sub_CE8270(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  size_t v3; // rbp
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned int *v9; // r9
  unsigned int v10; // edx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  _QWORD *v16; // r12
  unsigned __int64 v17; // r15
  _QWORD *v18; // rax
  __int64 v20; // rax
  _QWORD *v21; // r12
  unsigned __int8 *v22; // rbp
  _BYTE *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned int v26; // edx
  unsigned int *v27; // rsi
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  size_t v31; // r9
  _QWORD *v32; // rax
  unsigned __int64 v33; // rdx
  _BYTE *v34; // rdi
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r15
  void *v41; // rdi
  __int64 v42; // [rsp+8h] [rbp-40h]

  v3 = **(_QWORD **)a1;
  if ( !v3 )
    return 1;
  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 )
  {
    if ( v4 == 1 )
    {
      v6 = *(_QWORD *)(a2 + 32);
      v5 = v6;
    }
    else
    {
      if ( v4 == 2 || v4 == 3 )
        BUG();
      v5 = *(_QWORD *)(a2 + 32);
      v6 = *(_QWORD *)(v5 + 32);
    }
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 32);
    if ( !v5 || *(_BYTE *)(v5 + 26) )
      return 0;
    v6 = *(_QWORD *)(v5 + 32);
    v7 = *(unsigned int *)(a2 + 40);
    if ( *(_DWORD *)(v6 + 24) != (_DWORD)v7 && (_DWORD)v7 )
      v6 = *(_QWORD *)(v5 + v7 + 32);
  }
  LOBYTE(v2) = *(_BYTE *)(v6 + 60) & (*(_QWORD *)(v6 + 40) == 0);
  if ( (_BYTE)v2 )
  {
    if ( *(_DWORD *)(v6 + 16) == 1 )
    {
      v8 = 0xFFFFFFFFLL;
      if ( v4 )
        goto LABEL_16;
      v9 = *(unsigned int **)(v5 + 32);
      v10 = *(_DWORD *)(a2 + 40);
      if ( v9[6] == v10 || !v10 )
      {
        v12 = v9[5];
        v13 = v12;
        if ( v10 == -1 )
          goto LABEL_15;
        if ( v9[6] == v10 || !v10 )
        {
LABEL_43:
          v13 = v9[4];
          goto LABEL_15;
        }
        v11 = v10;
      }
      else
      {
        v11 = v10;
        v12 = *(unsigned int *)(*(_QWORD *)(v5 + v10 + 32) + 20LL);
        if ( v10 == -1 )
        {
          v13 = v9[5];
LABEL_15:
          v8 = v12 / v13;
LABEL_16:
          if ( v3 <= v8 )
          {
            v16 = *(_QWORD **)(a1 + 40);
            goto LABEL_18;
          }
          v20 = sub_E33C10(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 16), 2370, 0);
          v21 = (_QWORD *)v20;
          if ( v20 )
          {
            v22 = *(unsigned __int8 **)v20;
            if ( !*(_QWORD *)v20 )
            {
              v35 = *(_QWORD *)(v20 + 8);
              v36 = *(_DWORD *)(v35 + 14976);
              if ( v36 )
              {
                v37 = (unsigned int)(v36 - 1);
                *(_DWORD *)(v35 + 14976) = v37;
                v22 = *(unsigned __int8 **)(v35 + 8 * v37 + 14848);
                v38 = *((unsigned int *)v22 + 134);
                *v22 = 0;
                v39 = *((_QWORD *)v22 + 66);
                *((_DWORD *)v22 + 106) = 0;
                v40 = v39 + (v38 << 6);
                while ( v39 != v40 )
                {
                  while ( 1 )
                  {
                    v40 -= 64;
                    v41 = *(void **)(v40 + 24);
                    if ( v41 == (void *)(v40 + 40) )
                      break;
                    v42 = v39;
                    operator delete(v41);
                    v39 = v42;
                    if ( v42 == v40 )
                      goto LABEL_68;
                  }
                }
LABEL_68:
                *((_DWORD *)v22 + 134) = 0;
              }
              else
              {
                v22 = (unsigned __int8 *)operator new(0x3A0u);
                *v22 = 0;
                *((_QWORD *)v22 + 12) = v22 + 112;
                *((_QWORD *)v22 + 16) = v22 + 144;
                *((_QWORD *)v22 + 20) = v22 + 176;
                *((_QWORD *)v22 + 24) = v22 + 208;
                *((_QWORD *)v22 + 28) = v22 + 240;
                *((_QWORD *)v22 + 32) = v22 + 272;
                *((_QWORD *)v22 + 36) = v22 + 304;
                *((_QWORD *)v22 + 40) = v22 + 336;
                *((_QWORD *)v22 + 44) = v22 + 368;
                *((_QWORD *)v22 + 48) = v22 + 400;
                *((_QWORD *)v22 + 52) = v22 + 432;
                v22[112] = 0;
                *((_QWORD *)v22 + 13) = 0;
                *((_QWORD *)v22 + 17) = 0;
                v22[144] = 0;
                *((_QWORD *)v22 + 21) = 0;
                v22[176] = 0;
                *((_QWORD *)v22 + 25) = 0;
                v22[208] = 0;
                *((_QWORD *)v22 + 29) = 0;
                v22[240] = 0;
                *((_QWORD *)v22 + 33) = 0;
                v22[272] = 0;
                *((_QWORD *)v22 + 37) = 0;
                v22[304] = 0;
                *((_QWORD *)v22 + 41) = 0;
                v22[336] = 0;
                *((_QWORD *)v22 + 45) = 0;
                v22[368] = 0;
                *((_QWORD *)v22 + 49) = 0;
                v22[400] = 0;
                *((_QWORD *)v22 + 53) = 0x800000000LL;
                *((_QWORD *)v22 + 66) = v22 + 544;
                *((_QWORD *)v22 + 67) = 0x600000000LL;
              }
              *v21 = v22;
            }
            v22[*v22 + 1] = 2;
            v23 = (_BYTE *)*v21;
            v24 = *(unsigned __int8 *)*v21;
            *v23 = v24 + 1;
            *(_QWORD *)&v23[8 * v24 + 16] = 0;
          }
          v3 = 0xFFFFFFFFLL;
          if ( *(_DWORD *)(a2 + 24) )
          {
LABEL_39:
            v16 = *(_QWORD **)(a1 + 40);
            **(_QWORD **)a1 = v3;
LABEL_18:
            v17 = v16[1];
            if ( v3 > v17 )
            {
              v31 = v3 - v17;
              if ( v3 - v17 > 0x7FFFFFFFFFFFFFFFLL - v17 )
                std::__throw_length_error("basic_string::_M_replace_aux");
              v32 = (_QWORD *)*v16;
              if ( (_QWORD *)*v16 == v16 + 2 )
                v33 = 15;
              else
                v33 = v16[2];
              if ( v3 > v33 )
              {
                sub_998B30((__int64)v16, v16[1], 0, nullptr, v3 - v17);
                v32 = (_QWORD *)*v16;
                v31 = v3 - v17;
              }
              v34 = (char *)v32 + v17;
              if ( v31 == 1 )
                *v34 = 0;
              else
                memset(v34, 0, v31);
            }
            else if ( v3 >= v17 )
            {
LABEL_21:
              sub_99BDC0(v16, 0, v16[1], (_BYTE *)(*(_QWORD *)(a2 + 32) + *(_QWORD *)a2 + 40LL), v3);
              return v2;
            }
            v18 = (_QWORD *)*v16;
            v16[1] = v3;
            *((_BYTE *)v18 + v3) = 0;
            v16 = *(_QWORD **)(a1 + 40);
            v3 = **(_QWORD **)a1;
            goto LABEL_21;
          }
          v25 = *(_QWORD *)(a2 + 32);
          v26 = *(_DWORD *)(a2 + 40);
          v27 = *(unsigned int **)(v25 + 32);
          if ( v27[6] == v26 || !v26 )
          {
            v29 = v27[5];
            v30 = v29;
            if ( v26 == -1 )
              goto LABEL_38;
            if ( v27[6] == v26 || !v26 )
            {
LABEL_56:
              v30 = v27[4];
              goto LABEL_38;
            }
            v28 = v26;
          }
          else
          {
            v28 = v26;
            v29 = *(unsigned int *)(*(_QWORD *)(v25 + v26 + 32) + 20LL);
            if ( v26 == -1 )
            {
              v30 = v27[5];
LABEL_38:
              v3 = v29 / v30;
              goto LABEL_39;
            }
          }
          v27 = *(unsigned int **)(v25 + v28 + 32);
          goto LABEL_56;
        }
      }
      v9 = *(unsigned int **)(v5 + v11 + 32);
      goto LABEL_43;
    }
    return 0;
  }
  return v2;
}
