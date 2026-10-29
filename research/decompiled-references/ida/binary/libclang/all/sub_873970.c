_BOOL8 __fastcall sub_873970(__int64 a1, size_t *a2, __int64 *a3, _QWORD *a4, int a5, int a6)
{
  _BOOL4 v7; // esi
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v13; // rdi
  unsigned int v15; // eax
  __int64 v16; // r13
  size_t j; // r14
  __int64 v18; // rax
  char v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // rcx
  _QWORD *v24; // rdx
  char v25; // al
  unsigned int v26; // edx
  char v27; // al
  size_t i; // r14
  char v29; // al
  char v30; // al
  unsigned int v31; // ebp
  size_t v32; // rdx
  size_t *v33; // r14
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  size_t v37; // rdi
  const void *v38; // rbx
  size_t v39; // r12
  _BYTE *v40; // rax
  size_t v41; // rax
  unsigned int v42; // [rsp+8h] [rbp-150h]
  char v43; // [rsp+8h] [rbp-150h]
  __int64 v44; // [rsp+8h] [rbp-150h]
  bool v45; // [rsp+8h] [rbp-150h]
  char v46; // [rsp+10h] [rbp-148h]
  unsigned __int64 v47; // [rsp+20h] [rbp-138h]
  char v48; // [rsp+28h] [rbp-130h]
  size_t *v49; // [rsp+28h] [rbp-130h]
  size_t *v50; // [rsp+38h] [rbp-120h]
  void *v51; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v52; // [rsp+48h] [rbp-110h]
  char v53; // [rsp+4Ch] [rbp-10Ch]
  __int64 *v54; // [rsp+50h] [rbp-108h] BYREF
  __int64 *v55; // [rsp+58h] [rbp-100h] BYREF
  unsigned int v56; // [rsp+60h] [rbp-F8h]
  char v57; // [rsp+64h] [rbp-F4h]
  _QWORD v58[2]; // [rsp+90h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-B8h]
  char v60; // [rsp+A8h] [rbp-B0h]
  __int64 v61; // [rsp+B8h] [rbp-A0h]
  void *ptr; // [rsp+C0h] [rbp-98h]
  __int64 v63; // [rsp+C8h] [rbp-90h]
  _BYTE v64[136]; // [rsp+D0h] [rbp-88h] BYREF

  v7 = 0;
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = *(unsigned __int8 *)(v9 + 16);
  if ( (unsigned __int8)v10 <= 0x2Bu )
  {
    v13 = 0xFFFFF1FDFFFFF7FFLL;
    if ( !_bittest64((const __int64 *)&v13, v10) || (_BYTE)v10 == 13 && ((*(_WORD *)(v9 + 18) >> 3) & 0x1FF) == 0x1E7 )
    {
      v7 = 0;
      if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
      {
        v60 |= 1u;
        ptr = v64;
        v58[0] = 0;
        v63 = 0x800000000LL;
        v58[1] = 0;
        v59 = 0;
        v61 = 0;
        v64[65] = 0;
        v54 = a3;
        v55 = v58;
        LOBYTE(v56) = 0;
        v15 = sub_871080((__int64)&v54, a1, a3, v9, a5, a6);
        v7 = v15;
        if ( !(_BYTE)v15 )
          goto LABEL_6;
        LOBYTE(v7) = v15;
        v16 = sub_B167E0(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL), v15);
        if ( v58[0] )
        {
          if ( (v58[0] & 3) == 1 )
          {
            v34 = v58[0] & 0xFFFFFFFFFFFFFFFCLL;
            if ( (v58[0] & 0xFFFFFFFFFFFFFFFCLL) != 0 && (*(_WORD *)v34 & 0x1FF) == 0xA )
            {
              v35 = v59;
              if ( v59 >= 0 )
              {
                v36 = *(_DWORD *)(v34 + 16) * ((*(_WORD *)(v34 + 2) >> 6) & 7u);
                v45 = ((*(_WORD *)(v34 + 2) >> 6) & 7) == 1 && v36 >= v59;
                if ( v45
                  && *(_QWORD *)(*(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3[2] + 18488) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
                {
                  if ( v36 <= v59 )
                    v35 = *(_DWORD *)(v34 + 16) * ((*(_WORD *)(v34 + 2) >> 6) & 7u);
                  v37 = v36 - v35;
                  v38 = (const void *)(v34 + v35 + 4LL * *(unsigned int *)(v34 + 4) + 20);
                  v39 = v37;
                  if ( v37 )
                  {
                    v40 = memchr(v38, 0, v37);
                    if ( v40 )
                    {
                      v41 = v40 - (_BYTE *)v38;
                      if ( v37 > v41 )
                        v39 = v41;
                    }
                  }
                  *a2 = v39;
                  if ( a4 )
                    std::string::_M_replace();
LABEL_39:
                  v7 = v45;
LABEL_6:
                  if ( ptr != v64 )
                  {
                    free(ptr);
                    return v7;
                  }
                  return v7;
                }
              }
            }
          }
        }
        if ( !a4 )
        {
          v49 = a2;
          for ( i = 0; ; ++i )
          {
            BYTE4(v54) &= ~1u;
            LODWORD(v54) = 0;
            v30 = sub_85F440((__int64)a3, (_DWORD *)a1, v16, (__int64)v58, (__int64)&v54, 0);
            v26 = (unsigned int)v54;
            if ( !v30 || (_DWORD)v54 != 2 )
              break;
            v31 = v56;
            if ( v56 > 0x40 )
            {
              if ( v31 == (unsigned int)sub_2587400(&v55) )
                goto LABEL_53;
            }
            else if ( !v55 )
            {
LABEL_53:
              v32 = i;
              v33 = v49;
LABEL_54:
              *v33 = v32;
              goto LABEL_38;
            }
            v52 = 64;
            v51 = &dword_0 + 1;
            v53 = 0;
            v29 = sub_835AB0((__int64)a3, a1, (__int64)v58, v16, (__int64)&v51);
            if ( v52 > 0x40 && v51 )
            {
              v46 = v29;
              operator delete[](v51);
              v29 = v46;
            }
            v26 = (unsigned int)v54;
            if ( !v29 )
              break;
            if ( (unsigned int)v54 > 1 )
              sub_69F740((__int64)&v54);
          }
LABEL_37:
          v7 = 0;
          if ( v26 <= 1 )
            goto LABEL_6;
LABEL_38:
          v45 = v7;
          sub_69F740((__int64)&v54);
          goto LABEL_39;
        }
        v50 = a2;
        for ( j = 0; ; ++j )
        {
          BYTE4(v54) &= ~1u;
          LODWORD(v54) = 0;
          v27 = sub_85F440((__int64)a3, (_DWORD *)a1, v16, (__int64)v58, (__int64)&v54, 0);
          v26 = (unsigned int)v54;
          if ( !v27 || (_DWORD)v54 != 2 )
            goto LABEL_37;
          if ( v56 > 0x40 )
            break;
          LOBYTE(v18) = (_BYTE)v55;
          if ( !v55 )
          {
LABEL_68:
            v32 = j;
            v33 = v50;
            goto LABEL_54;
          }
          if ( v57 )
            goto LABEL_14;
          v19 = 0;
          if ( v56 )
            v19 = (__int64)((_QWORD)v55 << (64 - (unsigned __int8)v56)) >> (64 - (unsigned __int8)v56);
LABEL_15:
          v20 = a4[1];
          v21 = (_QWORD *)*a4;
          v22 = v20 + 1;
          if ( (_QWORD *)*a4 == a4 + 2 )
            v23 = 15;
          else
            v23 = a4[2];
          if ( v23 < v22 )
          {
            v48 = v19;
            v47 = v20 + 1;
            v44 = a4[1];
            std::string::_M_mutate();
            v21 = (_QWORD *)*a4;
            v19 = v48;
            v22 = v47;
            v20 = v44;
          }
          *((_BYTE *)v21 + v20) = v19;
          v24 = (_QWORD *)*a4;
          a4[1] = v22;
          *((_BYTE *)v24 + v20 + 1) = 0;
          v52 = 64;
          v51 = &dword_0 + 1;
          v53 = 0;
          v25 = sub_835AB0((__int64)a3, a1, (__int64)v58, v16, (__int64)&v51);
          if ( v52 > 0x40 && v51 )
          {
            v43 = v25;
            operator delete[](v51);
            v25 = v43;
          }
          v26 = (unsigned int)v54;
          if ( !v25 )
            goto LABEL_37;
          if ( (unsigned int)v54 > 1 )
            sub_69F740((__int64)&v54);
        }
        v42 = v56;
        if ( v42 == (unsigned int)sub_2587400(&v55) )
          goto LABEL_68;
        v18 = *v55;
LABEL_14:
        v19 = v18;
        goto LABEL_15;
      }
    }
  }
  return v7;
}

