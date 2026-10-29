void __fastcall sub_19FB6A0(__int64 *a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r15
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // r13
  unsigned __int8 v14; // al
  __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 *v18; // rax
  __int64 v19; // r8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int64 v26; // rdx
  __int64 v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  __int64 v30; // rdi
  int v31; // eax
  unsigned __int64 v32; // rax
  __int64 *v33; // rax
  __int64 v34; // rcx
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  void *ptr; // [rsp+0h] [rbp-118h] BYREF
  unsigned int v41; // [rsp+8h] [rbp-110h]
  unsigned int v42; // [rsp+Ch] [rbp-10Ch]
  _QWORD v43[8]; // [rsp+10h] [rbp-108h] BYREF
  __int64 (__fastcall **v44)(); // [rsp+50h] [rbp-C8h] BYREF
  int v45; // [rsp+58h] [rbp-C0h]
  __int64 v46; // [rsp+60h] [rbp-B8h]
  void *v47; // [rsp+68h] [rbp-B0h]
  __int64 v48; // [rsp+70h] [rbp-A8h]
  _BYTE v49[64]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+B8h] [rbp-60h]
  __int64 v51; // [rsp+C0h] [rbp-58h]
  unsigned int v52; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+D0h] [rbp-48h]
  char v54; // [rsp+D8h] [rbp-40h]

  if ( (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 89LL) & 2) != 0
    && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 248) + 17448LL) + 264LL) != 39 )
  {
    return;
  }
  v46 = *a1;
  v2 = v43;
  v45 = 16777472;
  v47 = v49;
  v48 = 0x800000000LL;
  v3 = a2 + 5;
  if ( !a2 )
    v3 = nullptr;
  ptr = v43;
  v44 = off_2C60DD0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v42 = 8;
  v43[0] = v3;
  v4 = 1;
  do
  {
    v5 = v2[v4 - 1];
    v41 = v4 - 1;
    v9 = sub_B8E970(v5);
    if ( v9 )
    {
      while ( 1 )
      {
        v12 = *(unsigned __int8 *)(v9 + 29);
        v13 = *(_BYTE *)(v9 + 29) & 2;
        if ( v13 )
          goto LABEL_13;
        v14 = *(_BYTE *)(v9 + 28) & 0x7F;
        if ( v14 == 24 || v14 == 6 )
        {
          v10 = 0;
          if ( sub_B8E0B0(v9) )
            v10 = sub_B8D340(v9);
          v6 = v41;
          v11 = v41 + 1LL;
          if ( v11 > v42 )
          {
            a2 = v43;
            sub_2237220(&ptr, v43, v11, 8);
            v6 = v41;
          }
          *((_QWORD *)ptr + v6) = v10;
          ++v41;
          goto LABEL_13;
        }
        if ( (unsigned int)v14 - 34 > 5 )
          goto LABEL_13;
        v15 = v9;
        v16 = *(_QWORD *)(v9 + 80);
        if ( (*(_BYTE *)(v9 + 82) & 0x40) != 0 && (v16 & 0x2000000) == 0
          || (v16 & 0x2000000) != 0
          || (v6 = *(unsigned __int8 *)(v9 + 83), (v6 & 8) == 0)
          && ((*(_BYTE *)(v9 + 128) & 1) != 0 || *(_QWORD *)(v9 + 128))
          || (v6 &= 0x40u, (_DWORD)v6)
          || (v32 = HIDWORD(v16), (v32 & 0x20) != 0)
          || (v32 & 0x40) != 0 )
        {
LABEL_20:
          v17 = v12 & 1;
          if ( !(_DWORD)v17 )
            goto LABEL_25;
          v18 = sub_B8C3D0(v9, (__int64)a2, v17, v6, v7, v8);
          v20 = *v18;
          v21 = *v18 + 8LL * *((unsigned int *)v18 + 2);
          if ( v20 < v21 )
          {
            v22 = v20;
            while ( 1 )
            {
              a2 = *(_QWORD **)v22;
              if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) == 227 )
                break;
              v22 += 8LL;
              if ( v21 == v22 )
                goto LABEL_25;
            }
            if ( v21 == v22 )
              goto LABEL_25;
LABEL_61:
            while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 227 )
              v20 += 8LL;
            a2 = (_QWORD *)v9;
            LODWORD(v53) = *(_DWORD *)(*(_QWORD *)v20 + 40LL);
            HIDWORD(v53) = 1 << (v53 - 33);
            sub_19FB110((__int64)&v44, v9, v20, (unsigned int)(v53 - 33), v19);
            goto LABEL_13;
          }
          if ( v20 == v21 )
            goto LABEL_25;
          if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) == 227 )
            goto LABEL_61;
          v33 = (__int64 *)(v21 + 8);
          while ( (__int64 *)v20 != v33 )
          {
            v34 = *v33++;
            if ( *(_WORD *)(v34 + 36) == 227 )
              goto LABEL_61;
          }
LABEL_25:
          v23 = v9;
          if ( !(unsigned __int8)sub_B8D5B0(v9) )
          {
            while ( 1 )
            {
              if ( (unsigned __int8)sub_B8D5B0(v15) )
                goto LABEL_26;
              v27 = *(_QWORD *)(v23 + 104);
              if ( (v27 & 1) != 0 )
                break;
              if ( (v27 & 2) != 0 )
              {
                if ( v13 )
                  goto LABEL_13;
                v35 = v27 & 0xFFFFFFFFFFFFFFFCLL;
                v13 = 1;
                v36 = v35;
                if ( !v35 )
                {
LABEL_75:
                  v26 = 0;
                  goto LABEL_36;
                }
                v37 = *(_QWORD *)(v35 + 18360);
                if ( v37 )
                {
                  a2 = &qword_18;
                  v38 = sub_19F7E40((__int64 *)(v36 + 2352), 24, 3u);
                  *(_QWORD *)v38 = v37;
                  *(_DWORD *)(v38 + 8) = 0;
                  *(_QWORD *)(v38 + 16) = v23;
                  v39 = v38 | 4;
                }
                else
                {
                  v39 = v23 & 0xFFFFFFFFFFFFFFFBLL;
                }
                v28 = v39 & 0xFFFFFFFFFFFFFFFELL;
                v27 = v28 | 1;
                *(_QWORD *)(v23 + 104) = v28 | 1;
                goto LABEL_43;
              }
              v26 = v27 & 0xFFFFFFFFFFFFFFFCLL;
              if ( (v27 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
                goto LABEL_75;
LABEL_36:
              if ( v9 == v26 || !v26 )
                goto LABEL_13;
              v15 = v26;
              v23 = v26;
            }
            if ( v13 )
              goto LABEL_13;
            v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
LABEL_43:
            v29 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            v13 = 1;
            v26 = v29;
            if ( v28 && (v28 & 4) != 0 && v29 )
            {
              v30 = *(_QWORD *)v29;
              v31 = *(_DWORD *)(*(_QWORD *)v29 + 12LL);
              if ( *(_DWORD *)(v29 + 8) != v31 )
              {
                *(_DWORD *)(v29 + 8) = v31;
                a2 = (_QWORD *)v23;
                (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64))(*(_QWORD *)v30 + 152LL))(
                  v30,
                  v23,
                  v29);
              }
              v26 = *(_QWORD *)(v29 + 16);
              v13 = 1;
            }
            goto LABEL_36;
          }
LABEL_26:
          a2 = (_QWORD *)v9;
          v53 = 0x8000000000000000LL;
          sub_19FB110((__int64)&v44, v9, v24, v6, v25);
          v7 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v9 = v7;
          if ( !v7 )
            break;
        }
        else
        {
          if ( sub_B8CF80(v9, (__int64)a2, v12, v6, v7, v8) )
          {
            LOBYTE(v12) = *(_BYTE *)(v9 + 29);
            goto LABEL_20;
          }
LABEL_13:
          v7 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v9 = v7;
          if ( !v7 )
            break;
        }
      }
    }
    v4 = v41;
    v2 = ptr;
  }
  while ( v41 );
  if ( ptr != v43 )
    free(ptr);
  v44 = off_2C60DD0;
  operator delete(v50, 16LL * v52, 8);
  if ( v47 != v49 )
    free(v47);
}
