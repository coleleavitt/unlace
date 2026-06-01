/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_59FD4
// Address: 0x00059FD4

//----- (00059FD4) --------------------------------------------------------
int __fastcall sub_59FD4(int a1, int *a2, char **a3, int a4)
{
  int *v5; // r7
  signed int v6; // r9
  int v7; // r11
  char *v8; // r4
  int v9; // t1
  _BYTE *v10; // r6
  unsigned int v11; // r5
  __int64 v12; // r2
  _BYTE *v13; // r6
  _BYTE *v14; // r0
  size_t v15; // r5
  char *v16; // r8
  unsigned int v17; // r2
  char *v18; // r5
  const char *v19; // r1
  int v20; // r3
  int v21; // t1
  const char *v22; // r4
  int v23; // r0
  int v24; // t1
  _BYTE *v25; // r0
  size_t v26; // r10
  int v27; // r5
  size_t v28; // r6
  unsigned int v29; // r10
  size_t v30; // r2
  const char *v31; // r1
  _BOOL4 v32; // r3
  _BYTE *v33; // r0
  int v34; // r4
  char *v35; // r0
  size_t v36; // r2
  size_t v37; // r8
  unsigned int v38; // r10
  size_t v39; // r8
  unsigned int v40; // r10
  char *v41; // r0
  size_t v42; // r2
  char *v43; // r0
  char *v44; // r0
  size_t v45; // r2
  char **v47; // [sp+0h] [bp-6Ch]
  int v48; // [sp+4h] [bp-68h]
  void *src; // [sp+8h] [bp-64h]
  int *v50; // [sp+Ch] [bp-60h]
  size_t v51; // [sp+10h] [bp-5Ch]
  char *v52; // [sp+14h] [bp-58h]
  size_t v53; // [sp+18h] [bp-54h]
  char *v54; // [sp+1Ch] [bp-50h]
  int v55; // [sp+20h] [bp-4Ch]
  void *v56; // [sp+24h] [bp-48h]
  void *v57; // [sp+28h] [bp-44h] BYREF
  size_t v58; // [sp+2Ch] [bp-40h]
  unsigned int v59; // [sp+30h] [bp-3Ch]
  void *ptr; // [sp+34h] [bp-38h] BYREF
  int v61; // [sp+38h] [bp-34h]
  _BYTE v62[5]; // [sp+40h] [bp-2Ch] BYREF
  char v63[3]; // [sp+45h] [bp-27h] BYREF
  _BYTE v64[5]; // [sp+48h] [bp-24h] BYREF
  char v65[3]; // [sp+4Dh] [bp-1Fh] BYREF
  _BYTE v66[5]; // [sp+50h] [bp-1Ch] BYREF
  char v67[3]; // [sp+55h] [bp-17h] BYREF
  char v68; // [sp+58h] [bp-14h] BYREF
  char v69; // [sp+62h] [bp-Ah] BYREF

  v55 = a1;
  v50 = a2;
  v48 = a4;
  v56 = &_stack_chk_guard;
  if ( !a4 )
    return 0;
  v57 = nullptr;
  v58 = 0;
  v59 = 0;
  if ( a4 <= 0 )
    return 0;
  v54 = &byte_8DFE8;
  v51 = 2147483646;
  src = &v68;
  v52 = &v69;
  while ( 2 )
  {
    v5 = v50;
    v6 = 0;
    v7 = 0;
    v47 = a3;
    v8 = &byte_8DFE8;
    v58 = 0;
    do
    {
      v9 = *v5++;
      v10 = src;
      v11 = (unsigned int)(v9 - v7) >> 31;
      v12 = (int)abs32(v9 - v7) + 1LL;
      v13 = (_BYTE *)(sub_76264(src, (unsigned int)v52, v12, HIDWORD(v12)) - v10);
      if ( !v13 )
        goto LABEL_6;
      v39 = v58;
      v40 = (unsigned int)&v13[v58];
      if ( __CFADD__(v13, v58) )
      {
        if ( v58 > v51 )
        {
          if ( (v58 & 0x80000000) != 0 )
            v58 = 0x7FFFFFFF;
          goto LABEL_56;
        }
        v40 = 0x7FFFFFFF;
        v44 = (char *)v57;
        if ( v59 >= 0x7FFFFFFF )
        {
          v45 = v58;
          goto LABEL_70;
        }
LABEL_82:
        v44 = (char *)sub_78018((int)&v57, v44, v40, 1u);
        v57 = v44;
        v45 = v58;
        goto LABEL_70;
      }
      if ( v58 < v40 )
      {
        v44 = (char *)v57;
        if ( v40 <= v59 )
        {
          v45 = v58;
LABEL_70:
          memset(&v44[v45], 0, v40 - v45);
          v58 = v40;
          goto LABEL_56;
        }
        goto LABEL_82;
      }
LABEL_56:
      memcpy((char *)v57 + v39, src, (size_t)v13);
LABEL_6:
      v14 = sub_76118(v62, (unsigned int)v63, v11);
      v15 = v14 - v62;
      if ( v14 == v62 )
        goto LABEL_7;
      v37 = v58;
      v38 = v15 + v58;
      if ( __CFADD__(v15, v58) )
      {
        if ( v58 > v51 )
        {
          if ( (v58 & 0x80000000) != 0 )
            v58 = 0x7FFFFFFF;
          goto LABEL_50;
        }
        v38 = 0x7FFFFFFF;
        v41 = (char *)v57;
        if ( v59 >= 0x7FFFFFFF )
        {
          v42 = v58;
          goto LABEL_61;
        }
LABEL_78:
        v41 = (char *)sub_78018((int)&v57, v41, v38, 1u);
        v57 = v41;
        v42 = v58;
        goto LABEL_61;
      }
      if ( v58 < v38 )
      {
        v41 = (char *)v57;
        if ( v38 <= v59 )
        {
          v42 = v58;
LABEL_61:
          memset(&v41[v42], 0, v38 - v42);
          v58 = v38;
          goto LABEL_50;
        }
        goto LABEL_78;
      }
LABEL_50:
      memcpy((char *)v57 + v37, v62, v15);
LABEL_7:
      v50 = v5;
      v7 = *(v5 - 1);
      v16 = *v47;
      v17 = (unsigned __int8)**v47++;
      if ( v17 )
      {
        if ( (unsigned __int8)*v8 == v17 )
        {
          v18 = v8;
          v19 = v16 + 1;
          v20 = 0;
          do
          {
            v22 = v19;
            v24 = *(unsigned __int8 *)v19++;
            v23 = v24;
            v17 = ++v20;
            if ( !v24 )
              break;
            v21 = (unsigned __int8)*++v18;
          }
          while ( v21 == v23 );
        }
        else
        {
          v22 = v16;
          v17 = 0;
        }
      }
      else
      {
        v22 = v16;
      }
      v25 = sub_76118(v64, (unsigned int)v65, v17);
      v26 = v25 - v64;
      v27 = v58;
      if ( v25 == v64 )
      {
        if ( v22 )
          goto LABEL_14;
        goto LABEL_39;
      }
      v53 = v58 + v26;
      if ( !__CFADD__(v58, v26) )
      {
        if ( v58 >= v53 )
          goto LABEL_38;
        goto LABEL_63;
      }
      if ( v58 <= v51 )
      {
        v53 = 0x7FFFFFFF;
LABEL_63:
        v43 = (char *)v57;
        if ( v53 > v59 )
        {
          v43 = (char *)sub_78018((int)&v57, v57, v53, 1u);
          v57 = v43;
        }
        memset(&v43[v58], 0, v53 - v58);
        v58 = v53;
        goto LABEL_38;
      }
      if ( (v58 & 0x80000000) != 0 )
        v58 = 0x7FFFFFFF;
LABEL_38:
      memcpy((char *)v57 + v27, v64, v26);
      v27 = v58;
      if ( v22 )
      {
LABEL_14:
        v28 = strlen(v22) + 1;
        v29 = v28 + v27;
        if ( !__CFADD__(v28, v27) )
          goto LABEL_40;
        goto LABEL_16;
      }
LABEL_39:
      v28 = 1;
      v22 = v54;
      v29 = v27 + 1;
      if ( v27 != -1 )
      {
LABEL_40:
        if ( v29 <= v27 )
          goto LABEL_19;
        v35 = (char *)v57;
        if ( v29 <= v59 )
        {
          v36 = v27;
LABEL_44:
          memset(&v35[v36], 0, v29 - v36);
          v58 = v29;
          goto LABEL_19;
        }
LABEL_73:
        v35 = (char *)sub_78018((int)&v57, v35, v29, 1u);
        v57 = v35;
        v36 = v58;
        goto LABEL_44;
      }
LABEL_16:
      if ( v27 <= v51 )
      {
        v29 = 0x7FFFFFFF;
        v35 = (char *)v57;
        if ( v59 >= 0x7FFFFFFF )
        {
          v36 = v27;
          goto LABEL_44;
        }
        goto LABEL_73;
      }
      if ( v27 < 0 )
        v58 = 0x7FFFFFFF;
LABEL_19:
      v30 = v28;
      v31 = v22;
      a3 = v47;
      ++v6;
      v8 = v16;
      memcpy((char *)v57 + v27, v31, v30);
      v32 = v48 <= v6;
      if ( v58 > 0x100000 )
        v32 = 1;
    }
    while ( !v32 );
    v48 -= v6;
    sub_67C24((int *)&ptr, 50);
    v33 = sub_76118(v66, (unsigned int)v67, v6);
    if ( v33 != v66 )
      sub_580D4((int)&ptr, v66, v33 - v66);
    if ( v58 )
      sub_580D4((int)&ptr, v57, v58);
    if ( v6 == sub_60E38(v55 + 100, (int *)&ptr, 0xFFFFFFFF, nullptr) )
    {
      if ( ptr )
      {
        v61 = 0;
        sub_77F70(ptr);
      }
      if ( v48 <= 0 )
      {
        v34 = 0;
        goto LABEL_31;
      }
      continue;
    }
    break;
  }
  if ( ptr )
  {
    v61 = 0;
    sub_77F70(ptr);
  }
  v34 = 1;
LABEL_31:
  if ( v57 )
  {
    v58 = 0;
    sub_77F70(v57);
  }
  return v34;
}
// 8DFE8: using guessed type char byte_8DFE8;
