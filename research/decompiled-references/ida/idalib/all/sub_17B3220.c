unsigned __int64 __fastcall sub_17B3220(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7)
{
  __int64 *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  int v16; // edx
  __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 *v20; // rax
  __int64 *v21; // rdx
  unsigned __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // [rsp+8h] [rbp-190h]
  unsigned __int8 v28; // [rsp+18h] [rbp-180h]
  __int64 v29; // [rsp+18h] [rbp-180h]
  unsigned __int8 v30; // [rsp+20h] [rbp-178h]
  __int64 v31; // [rsp+20h] [rbp-178h]
  __int64 v32; // [rsp+20h] [rbp-178h]
  unsigned __int8 v34; // [rsp+4Fh] [rbp-149h]
  unsigned __int8 v35; // [rsp+4Fh] [rbp-149h]
  __int64 v36; // [rsp+58h] [rbp-140h]
  bool v37; // [rsp+6Fh] [rbp-129h] BYREF
  __int64 v38; // [rsp+70h] [rbp-128h] BYREF
  __int64 v39; // [rsp+78h] [rbp-120h] BYREF
  void *ptr; // [rsp+80h] [rbp-118h] BYREF
  __int64 v41; // [rsp+88h] [rbp-110h]
  _QWORD v42[8]; // [rsp+90h] [rbp-108h] BYREF
  _BYTE v43[200]; // [rsp+D0h] [rbp-C8h] BYREF

  v36 = (__int64)a2;
  ptr = v42;
  v41 = 0x800000000LL;
  if ( (*(_BYTE *)(a3 + 2) & 0x40) != 0 )
  {
    LODWORD(v41) = 1;
    v42[0] = *(_QWORD *)(a3 + 8);
  }
  v27 = (__int64 *)(a4 + 8 * a5);
  if ( (__int64 *)a4 != v27 )
  {
    v7 = (__int64 *)a4;
    v30 = 0;
    v8 = 0;
    v9 = 0;
    v28 = 0;
    v10 = 0;
    while ( 1 )
    {
      v14 = *v7;
      if ( *v7 )
        break;
LABEL_19:
      if ( v27 == ++v7 )
        goto LABEL_34;
    }
    v15 = *(_BYTE *)(v14 + 28) & 0x7F;
    v16 = v15;
    if ( (unsigned int)v15 - 40 > 6 )
    {
      if ( (unsigned int)v15 - 34 <= 0x11 )
      {
LABEL_7:
        if ( !v10 )
          v10 = v14;
        if ( !v9 && v15 == 46 )
          v9 = v14;
        if ( !v8 && ((*(_DWORD *)a3 & 0x7F000) == 0x34000 || (*(_DWORD *)a3 & 0x7E000) == (_DWORD)&stru_32000) )
        {
          if ( (unsigned int)(v16 - 40) > 6 )
          {
            v8 = v14;
          }
          else if ( sub_F57EA0(*(_QWORD *)(*(_QWORD *)(v14 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            v8 = v14;
          }
        }
        if ( v10 != v14 )
        {
          if ( ((v28 ^ 1) & (v9 != 0)) != 0 )
          {
            v35 = (v28 ^ 1) & (v9 != 0);
            sub_168B9F0((__int64)v43, a1 + 1, *(_DWORD *)(v9 + 24), 0xE0Au, 0);
            v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            v29 = sub_1587DB0((__int64)v43, &v38);
            a2 = &v39;
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            sub_1587DB0(v29, &v39);
            sub_15F7200(v43);
            v28 = v35;
          }
          if ( ((v30 ^ 1) & (v8 != 0)) != 0 )
          {
            v34 = (v30 ^ 1) & (v8 != 0);
            sub_168B9F0((__int64)v43, a1 + 1, *(_DWORD *)(v8 + 24), 0xCC1u, 0);
            v37 = sub_F57EA0(*(_QWORD *)(*(_QWORD *)(v8 + 48) & 0xFFFFFFFFFFFFFFF0LL));
            v31 = sub_1588420((__int64)v43, (unsigned __int8 *)&v37);
            v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            v32 = sub_1587DB0(v31, &v38);
            a2 = &v39;
            v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            sub_1587DB0(v32, &v39);
            sub_15F7200(v43);
            v30 = v34;
          }
        }
      }
LABEL_16:
      v12 = (unsigned int)v41;
      a4 = HIDWORD(v41);
      v13 = (unsigned int)v41 + 1LL;
      if ( v13 > HIDWORD(v41) )
      {
        a2 = v42;
        sub_2237220(&ptr, v42, v13, 8);
        v12 = (unsigned int)v41;
      }
      *((_QWORD *)ptr + v12) = v14;
      LODWORD(v41) = v41 + 1;
      goto LABEL_19;
    }
    v11 = *(unsigned int *)(a1[29] + 64);
    if ( !(_DWORD)v11 || (*(_BYTE *)(v14 + 29) & 1) == 0 )
      goto LABEL_7;
    v20 = sub_B8C3D0(*v7, (__int64)a2, v15, v11, a5, a6);
    v21 = (__int64 *)*v20;
    v22 = *v20 + 8LL * *((unsigned int *)v20 + 2);
    if ( *v20 < v22 )
    {
      v25 = *v20;
      if ( *(_WORD *)(*v21 + 36) != 295 )
      {
        while ( 1 )
        {
          v25 += 8LL;
          if ( v22 == v25 )
            break;
          if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) == 295 )
            goto LABEL_53;
        }
LABEL_48:
        v15 = *(_BYTE *)(v14 + 28) & 0x7F;
        v16 = v15;
        if ( (unsigned int)v15 - 34 <= 0x11 )
          goto LABEL_7;
        goto LABEL_16;
      }
LABEL_53:
      if ( v22 == v25 )
        goto LABEL_48;
    }
    else
    {
      if ( v21 == (__int64 *)v22 )
        goto LABEL_48;
      if ( *(_WORD *)(*(_QWORD *)v22 + 36LL) != 295 )
      {
        v23 = (__int64 *)(v22 + 8);
        while ( v21 != v23 )
        {
          v24 = *v23++;
          if ( *(_WORD *)(v24 + 36) == 295 )
            goto LABEL_54;
        }
        goto LABEL_48;
      }
    }
LABEL_54:
    if ( !sub_9B48E0(v14) )
    {
      a2 = (__int64 *)v14;
      sub_1B51460(a1[95], v14);
    }
    goto LABEL_48;
  }
  v10 = 0;
LABEL_34:
  if ( (((unsigned __int8)(*(_DWORD *)a3 >> 12) + 105) & 0x7Fu) <= 4 )
  {
    v17 = *(_QWORD *)(a3 + 8);
    if ( v17 )
    {
      if ( (*(_BYTE *)(v17 + 28) & 0x7Fu) - 58 <= 4 )
      {
        sub_17A3D60((__int64)a1, *(_QWORD *)(a3 + 8), v36);
        if ( v10 )
        {
          if ( !*(_QWORD *)(v17 + 40) )
          {
            v26 = *(_QWORD *)(v17 + 120);
            if ( ((v26 & 4) != 0 || (v26 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
              sub_A681E0(a1[31]);
          }
        }
      }
    }
  }
  v18 = sub_17B2ED0((__int64)a1, (__int64 *)ptr, (unsigned int)v41, a4, a5, a7);
  if ( ptr != v42 )
    free(ptr);
  return v18;
}
