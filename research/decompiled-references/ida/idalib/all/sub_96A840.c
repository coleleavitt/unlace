unsigned __int64 __fastcall sub_96A840(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int64 a4,
        __int64 a5,
        void (*a6)(void))
{
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // r13
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 *v18; // rsi
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  unsigned __int64 v21; // r8
  unsigned int v22; // r11d
  __int64 *v23; // rax
  unsigned __int64 v24; // r10
  bool v25; // r15
  __int64 v26; // r14
  unsigned int v27; // r11d
  _WORD *v28; // rax
  __int64 v29; // r14
  unsigned int v30; // r11d
  _WORD *v31; // rax
  __int64 v32; // r14
  unsigned int v33; // r11d
  _WORD *v34; // rax
  __int64 v35; // r14
  unsigned int v36; // r11d
  _WORD *v37; // rax
  __int64 v38; // r14
  __int64 *v39; // r14
  __int64 v40; // r10
  __int64 *v41; // r10
  unsigned __int64 v42; // r15
  bool v43; // r14
  __int64 v44; // r10
  __int64 *v45; // r10
  __int64 v46; // rdx
  char *v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  int v51; // r11d
  unsigned __int64 v52; // [rsp+0h] [rbp-E8h]
  _QWORD v53[4]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-B8h] BYREF
  __int64 *v55; // [rsp+78h] [rbp-70h]
  unsigned __int64 v56; // [rsp+A8h] [rbp-40h]

  v9 = a1;
  v10 = a1 + a2;
  v56 = __readfsqword(0x28u);
  if ( a2 <= 0 )
    v10 = a1;
  result = sub_969F90(v53, a1, a2, a3, a4, a5);
  if ( result <= 0xFFFFFFFFFFFFFF88LL && result )
  {
    a6();
    v12 = a5 + 4;
    _RDI = (__int64 **)v53;
    v52 = (unsigned __int64)(a2 + 3) >> 2;
    while ( 1 )
    {
      v14 = (unsigned __int64)_RDI[4];
      v15 = v10 - v9;
      v9 += v52;
      if ( v15 < v52 )
        v9 = v10;
      if ( v9 < v14 )
        return -20;
      v16 = *_RDI;
      if ( *_RDI < _RDI[15] - 1 )
        return -20;
      __asm { tzcnt   rax, [rdi+40h] }
      v18 = v55;
      v19 = v9 - v14;
      v20 = *v16;
      v21 = (unsigned __int64)(v55 + 1);
      v22 = _RAX;
      if ( v9 - v14 > 7 )
        break;
      if ( (unsigned __int64)v16 >= v21 )
      {
        v22 = _RAX & 7;
        v16 = (__int64 *)((char *)v16 - (_RAX >> 3));
        v20 = *v16;
LABEL_51:
        if ( v19 > 1 )
        {
          v42 = v9 - 2;
          v23 = _RDI[4];
          while ( 1 )
          {
LABEL_27:
            if ( v21 <= (unsigned __int64)v16 )
            {
              v48 = v22;
              v22 &= 7u;
              v16 = (__int64 *)((char *)v16 - (v48 >> 3));
              v20 = *v16;
              v43 = (unsigned __int64)v23 <= v42;
            }
            else
            {
              if ( v18 == v16 )
                goto LABEL_31;
              v45 = (__int64 *)((char *)v16 - (v22 >> 3));
              if ( v45 < v18 )
              {
                LOBYTE(v22) = v22 - 8 * ((_BYTE)v16 - (_BYTE)v18);
                v20 = *(__int64 *)((char *)v16 - (unsigned int)((_DWORD)v16 - (_DWORD)v18));
                goto LABEL_31;
              }
              v16 = (__int64 *)((char *)v16 - (v22 >> 3));
              v43 = (unsigned __int64)v23 <= v42;
              v22 -= 8 * (v22 >> 3);
              v20 = *v45;
            }
            if ( v43 )
            {
              v44 = v12 + 4 * ((unsigned __int64)(v20 << v22) >> 53);
              *(_WORD *)v23 = *(_WORD *)v44;
              v22 += *(unsigned __int8 *)(v44 + 2);
              v23 = (__int64 *)((char *)v23 + *(unsigned __int8 *)(v44 + 3));
              if ( v22 <= 0x40 )
                continue;
            }
            goto LABEL_31;
          }
        }
        v23 = _RDI[4];
        goto LABEL_33;
      }
      if ( v16 == v55 )
        goto LABEL_51;
      v50 = (unsigned int)_RAX >> 3;
      v41 = (__int64 *)((char *)v16 - ((unsigned int)_RAX >> 3));
      if ( v41 < v55 )
      {
        v50 = (_DWORD)v16 - (_DWORD)v55;
        v41 = (__int64 *)((char *)v16 - (unsigned int)((_DWORD)v16 - (_DWORD)v55));
      }
      v51 = _RAX;
      v23 = _RDI[4];
      v22 = v51 - 8 * v50;
      v20 = *v41;
LABEL_45:
      if ( v19 > 1 )
      {
        v42 = v9 - 2;
        if ( v22 <= 0x40 )
        {
          v16 = v41;
          goto LABEL_27;
        }
LABEL_31:
        while ( (unsigned __int64)v23 <= v42 )
        {
          v46 = v12 + 4 * ((unsigned __int64)(v20 << v22) >> 53);
          *(_WORD *)v23 = *(_WORD *)v46;
          LOBYTE(v22) = *(_BYTE *)(v46 + 2) + v22;
          v23 = (__int64 *)((char *)v23 + *(unsigned __int8 *)(v46 + 3));
        }
      }
LABEL_33:
      if ( v9 > (unsigned __int64)v23 )
      {
        v23 = (__int64 *)((char *)v23 + 1);
        *((_BYTE *)v23 - 1) = *(_BYTE *)(v12 + 4 * ((unsigned __int64)(v20 << v22) >> 53));
      }
      v47 = (char *)v23 + (_QWORD)_RDI[4] - v14;
      _RDI[4] = (__int64 *)v47;
      if ( v47 != (char *)v9 )
        return -20;
      if ( &v54 == (__int64 *)++_RDI )
        return a2;
    }
    v23 = _RDI[4];
    v24 = v9 - 9;
    do
    {
      if ( v21 <= (unsigned __int64)v16 )
      {
        v49 = v22;
        v22 &= 7u;
        v16 = (__int64 *)((char *)v16 - (v49 >> 3));
        v20 = *v16;
        v25 = (unsigned __int64)v23 < v24;
      }
      else
      {
        if ( v18 == v16 )
        {
          v42 = v9 - 2;
          if ( v9 - (unsigned __int64)v23 > 1 )
            goto LABEL_27;
          goto LABEL_33;
        }
        v39 = (__int64 *)((char *)v16 - (v22 >> 3));
        if ( v39 < v18 )
        {
          v40 = (unsigned int)((_DWORD)v16 - (_DWORD)v18);
          v16 = (__int64 *)((char *)v16 - v40);
          v22 -= 8 * v40;
          v20 = *v16;
LABEL_19:
          v41 = v16;
          v19 = v9 - (_QWORD)v23;
          goto LABEL_45;
        }
        v16 = (__int64 *)((char *)v16 - (v22 >> 3));
        v25 = (unsigned __int64)v23 < v24;
        v22 -= 8 * (v22 >> 3);
        v20 = *v39;
      }
      if ( !v25 )
        goto LABEL_19;
      v26 = v12 + 4 * ((unsigned __int64)(v20 << v22) >> 53);
      *(_WORD *)v23 = *(_WORD *)v26;
      v27 = *(unsigned __int8 *)(v26 + 2) + v22;
      v28 = (_WORD *)((char *)v23 + *(unsigned __int8 *)(v26 + 3));
      v29 = v12 + 4 * ((unsigned __int64)(v20 << v27) >> 53);
      *v28 = *(_WORD *)v29;
      v30 = *(unsigned __int8 *)(v29 + 2) + v27;
      v31 = (_WORD *)((char *)v28 + *(unsigned __int8 *)(v29 + 3));
      v32 = v12 + 4 * ((unsigned __int64)(v20 << v30) >> 53);
      *v31 = *(_WORD *)v32;
      v33 = *(unsigned __int8 *)(v32 + 2) + v30;
      v34 = (_WORD *)((char *)v31 + *(unsigned __int8 *)(v32 + 3));
      v35 = v12 + 4 * ((unsigned __int64)(v20 << v33) >> 53);
      *v34 = *(_WORD *)v35;
      v36 = *(unsigned __int8 *)(v35 + 2) + v33;
      v37 = (_WORD *)((char *)v34 + *(unsigned __int8 *)(v35 + 3));
      v38 = v12 + 4 * ((unsigned __int64)(v20 << v36) >> 53);
      *v37 = *(_WORD *)v38;
      v22 = *(unsigned __int8 *)(v38 + 2) + v36;
      v23 = (__int64 *)((char *)v37 + *(unsigned __int8 *)(v38 + 3));
    }
    while ( v22 <= 0x40 );
    v42 = v9 - 2;
    if ( v9 - (unsigned __int64)v23 <= 1 )
      goto LABEL_33;
    goto LABEL_31;
  }
  return result;
}
