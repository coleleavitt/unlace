_BOOL8 __fastcall sub_56EDA0(__int64 a1, unsigned int a2, double a3, double a4, double a5, __m128 a6)
{
  _BOOL4 v7; // r14d
  __int64 v8; // rbp
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 v11; // r12
  unsigned int v13; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r12
  unsigned __int16 v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // r14
  unsigned __int16 v21; // dx
  _BOOL4 v22; // r12d
  __int64 v23; // r8
  __int64 v24; // r15
  _WORD *v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // r8
  int v30; // edx
  unsigned __int64 *v31; // rbx
  __int64 v32; // r8
  unsigned __int64 v33; // rbp
  __int64 v34; // r15
  _WORD *v35; // rax
  unsigned __int16 v36; // bp
  char *v37; // rax
  FILE *v38; // rdx
  int v39; // edx
  unsigned __int16 v40; // [rsp+0h] [rbp-78h]
  __int64 v41; // [rsp+0h] [rbp-78h]
  __int64 v42; // [rsp+8h] [rbp-70h]
  __int16 v43; // [rsp+8h] [rbp-70h]
  __int64 v44; // [rsp+10h] [rbp-68h]
  __int64 v45; // [rsp+10h] [rbp-68h]
  __int64 v46; // [rsp+18h] [rbp-60h]
  _QWORD *v47; // [rsp+20h] [rbp-58h]
  unsigned int v48; // [rsp+28h] [rbp-50h]
  char v49; // [rsp+2Fh] [rbp-49h]
  __int64 v50; // [rsp+30h] [rbp-48h]
  int v51; // [rsp+38h] [rbp-40h]
  unsigned int v52; // [rsp+3Ch] [rbp-3Ch]

  v7 = 0;
  while ( 1 )
  {
    v8 = *(_QWORD *)(a1 + 1216);
    v9 = sub_56D830(v8, a2, sub_55C940, 0, 0, a3, a4, a5, a6);
    v11 = v9;
    if ( !v10 )
      return v7;
    v13 = v10;
    v7 = 0;
    sub_56E900(v8, *(_DWORD *)(v9 + 16), a2);
    *(_DWORD *)(v11 + 16) = a2;
    v46 = v11;
    v50 = v11 + 24LL * v13;
    v52 = a2;
    do
    {
      v47 = *(_QWORD **)v46;
      v14 = *(_DWORD *)(v46 + 8);
      v15 = *(_QWORD *)(a1 + 1216);
      v48 = *(_DWORD *)(v46 + 16);
      if ( v48 >= *(_DWORD *)(v15 + 8) )
        __assert_fail("(uint32_t)(version) < (&self->heads)->size", "lib/src/./stack.c", 0x1DBu, "ts_stack_state");
      v16 = 48LL * v48;
      v17 = **(_WORD **)(*(_QWORD *)v15 + v16);
      if ( !v14 )
        __assert_fail(
          "(uint32_t)(0) < (&slice.subtrees)->size",
          "lib/src/./parser.c",
          0xC6u,
          "ts_parser__breakdown_top_of_stack");
      v18 = *v47;
      v49 = *(_BYTE *)v47 & 1;
      if ( !v49 )
      {
        v19 = *(unsigned int *)(v18 + 36);
        if ( (_DWORD)v19 )
        {
          v44 = *(unsigned int *)(v18 + 36);
          v20 = 0;
          v51 = *(_DWORD *)(v46 + 8);
          v40 = v17;
          v42 = 48LL * v48;
          while ( 1 )
          {
            v26 = v18 + 8 * (v20 - v19);
            v27 = *(_QWORD *)v26;
            v21 = *(unsigned __int8 *)(v26 + 1);
            v22 = (*(_BYTE *)v26 & 8) != 0;
            v28 = *(_QWORD *)v26 & 1LL;
            if ( (*(_QWORD *)v26 & 1) != 0 )
            {
              if ( (*(_BYTE *)v26 & 8) != 0 )
              {
                v22 = 0;
                goto LABEL_22;
              }
            }
            else
            {
              v21 = *(_WORD *)(v27 + 40);
              LOBYTE(v22) = *(_DWORD *)(v27 + 36) != 0;
              if ( v21 == 0xFFFF )
              {
                v40 = 0;
                if ( !*(_DWORD *)v27 )
LABEL_43:
                  __assert_fail("self.ptr->ref_count > 0", "lib/src/./subtree.c", 0x22Bu, "ts_subtree_retain");
                goto LABEL_14;
              }
              if ( (*(_BYTE *)(v27 + 44) & 4) != 0 )
                goto LABEL_13;
            }
            v40 = sub_562F50(*(_QWORD *)(a1 + 1256), v40, v21);
            if ( !(_BYTE)v28 )
            {
LABEL_13:
              if ( !*(_DWORD *)v27 )
                goto LABEL_43;
LABEL_14:
              _InterlockedAdd((volatile signed __int32 *)v27, 1u);
              if ( !*(_DWORD *)v27 )
                __assert_fail("self.ptr->ref_count != 0", "lib/src/./subtree.c", 0x22Du, "ts_subtree_retain");
              v23 = *(_QWORD *)(a1 + 1216);
              if ( v48 >= *(_DWORD *)(v23 + 8) )
LABEL_47:
                __assert_fail(
                  "(uint32_t)(version) < (&self->heads)->size",
                  "lib/src/./stack.c",
                  0x207u,
                  "ts_stack_push");
              v24 = *(_QWORD *)v23 + v42;
              v25 = sub_55DDD0(*(_QWORD *)v24, v27, v22, v40, (__int64 *)(v23 + 48));
LABEL_17:
              *(_QWORD *)v24 = v25;
              if ( v44 == ++v20 )
                goto LABEL_25;
              goto LABEL_18;
            }
LABEL_22:
            v29 = *(_QWORD *)(a1 + 1216);
            if ( v48 >= *(_DWORD *)(v29 + 8) )
              goto LABEL_47;
            v24 = *(_QWORD *)v29 + v42;
            v25 = sub_55DDD0(*(_QWORD *)v24, v27, v22, v40, (__int64 *)(v29 + 48));
            if ( v27 )
              goto LABEL_17;
            v30 = *((_DWORD *)v25 + 55);
            *(_QWORD *)v24 = v25;
            ++v20;
            *(_DWORD *)(v24 + 16) = v30;
            if ( v20 == v44 )
            {
LABEL_25:
              v7 = v22;
              v14 = v51;
              v17 = v40;
              v16 = 48LL * v48;
              break;
            }
LABEL_18:
            v19 = *(unsigned int *)(v18 + 36);
          }
        }
      }
      if ( v14 != 1 )
      {
        v45 = v18;
        v43 = v17;
        v31 = v47 + 1;
        v41 = (__int64)&v47[(unsigned int)(v14 - 2) + 2];
        do
        {
          while ( 1 )
          {
            v32 = *(_QWORD *)(a1 + 1216);
            v33 = *v31;
            if ( v48 >= *(_DWORD *)(v32 + 8) )
              goto LABEL_47;
            v34 = v16 + *(_QWORD *)v32;
            v35 = sub_55DDD0(*(_QWORD *)v34, *v31, 0, v43, (__int64 *)(v32 + 48));
            if ( !v33 )
              break;
            *(_QWORD *)v34 = v35;
            if ( (unsigned __int64 *)v41 == ++v31 )
              goto LABEL_31;
          }
          v39 = *((_DWORD *)v35 + 55);
          *(_QWORD *)v34 = v35;
          ++v31;
          *(_DWORD *)(v34 + 16) = v39;
        }
        while ( v31 != (unsigned __int64 *)v41 );
LABEL_31:
        v18 = v45;
      }
      sub_56C9A0(a1 + 1224, (volatile signed __int32 *)v18);
      off_8C52A0(v47);
      if ( *(_QWORD *)(a1 + 152) || *(_QWORD *)(a1 + 1400) )
      {
        if ( v49 )
          v36 = BYTE1(v18);
        else
          v36 = *(_WORD *)(v18 + 40);
        v37 = sub_563060(*(_QWORD *)(a1 + 1256), v36);
        snprintf((char *)(a1 + 192), 0x400u, "breakdown_top_of_stack tree:%s", v37);
        sub_55D530(a1);
        v38 = *(FILE **)(a1 + 1400);
        if ( v38 )
        {
          sub_56A7C0(*(_QWORD *)(a1 + 1216), *(_QWORD *)(a1 + 1256), v38);
          fwrite("\n\n", 1u, 2u, *(FILE **)(a1 + 1400));
        }
      }
      v46 += 24;
    }
    while ( v50 != v46 );
    a2 = v52;
    if ( !v7 )
      return 1;
  }
}
