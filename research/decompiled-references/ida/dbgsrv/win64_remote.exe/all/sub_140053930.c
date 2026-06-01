/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140053930
// Address: 0x0000000140053930

//----- (0000000140053930) ----------------------------------------------------
void __fastcall sub_140053930(__int64 a1)
{
  __int64 v2; // rax
  size_t v3; // r8
  __int64 v4; // rax
  size_t v5; // r8
  __int64 v6; // rax
  size_t v7; // r8
  char *v8; // r12
  size_t v9; // rax
  size_t v10; // rbx
  size_t v11; // rsi
  void *v12; // rax
  size_t v13; // r15
  void *v14; // rbx
  const char *v15; // rdx
  char *v16; // rcx
  size_t v17; // rsi
  size_t v18; // rbx
  void *v19; // rax
  unsigned __int64 v20; // rax
  const char *v21; // rax
  __int64 *v22; // rsi
  __int64 *v23; // rax
  __int64 *v24; // rbx
  _QWORD *v25; // rax
  const char *v26; // rax
  void *v27; // rcx
  const char *v28; // rbx
  const char *v29; // rax
  void *Block; // [rsp+30h] [rbp-D0h] BYREF
  size_t v31; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h]
  char *Str1; // [rsp+48h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-B0h]
  __int64 v35; // [rsp+58h] [rbp-A8h]
  __int64 v36[3]; // [rsp+60h] [rbp-A0h] BYREF
  void *v37; // [rsp+78h] [rbp-88h] BYREF
  __int128 v38; // [rsp+80h] [rbp-80h]
  __int16 v39; // [rsp+90h] [rbp-70h]
  void *v40; // [rsp+98h] [rbp-68h] BYREF
  __int128 v41; // [rsp+A0h] [rbp-60h]
  void *v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v43; // [rsp+C0h] [rbp-40h]
  __int64 *v44; // [rsp+D0h] [rbp-30h]
  struct __crt_locale_pointers v45[2]; // [rsp+D8h] [rbp-28h] BYREF
  CHAR Src[1040]; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)(a1 + 80) = sub_1400543F0(*(_BYTE *)(a1 + 106));
  v36[2] = 88;
  v37 = nullptr;
  v38 = 0;
  v39 = 0;
  v40 = nullptr;
  v41 = 0;
  *(_OWORD *)v42 = 0;
  v43 = 0;
  if ( &v37 != (void **)(a1 + 8) )
  {
    v2 = *(_QWORD *)(a1 + 16);
    v3 = v2 - 1;
    if ( !v2 )
      v3 = 0;
    if ( v3 )
      sub_140001810((__int64)&v37, *(const void **)(a1 + 8), v3);
    else
      *(_QWORD *)&v38 = 0;
  }
  v39 = *(_WORD *)(a1 + 104);
  if ( &v40 != (void **)(a1 + 32) )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = v4 - 1;
    if ( !v4 )
      v5 = 0;
    if ( v5 )
      sub_140001810((__int64)&v40, *(const void **)(a1 + 32), v5);
    else
      *(_QWORD *)&v41 = 0;
  }
  if ( v42 != (void **)(a1 + 56) )
  {
    v6 = *(_QWORD *)(a1 + 64);
    v7 = v6 - 1;
    if ( !v6 )
      v7 = 0;
    if ( v7 )
      sub_140001810((__int64)v42, *(const void **)(a1 + 56), v7);
    else
      v42[1] = nullptr;
  }
  if ( !(unsigned __int8)sub_1400543E0(*(_QWORD *)(a1 + 80)) )
  {
    if ( sub_1400052E0(a1 + 8) )
      v28 = "0.0.0.0";
    else
      v28 = (const char *)sub_14000E210(a1 + 8);
    v29 = (const char *)sub_1400545E0(*(_QWORD *)(a1 + 80));
    sub_1400542D0("%s:%u: %s\n", v28, *(unsigned __int16 *)(a1 + 104), v29);
    sub_1400545F0((_QWORD *)(a1 + 80));
    exit(1);
  }
  Block = nullptr;
  v31 = 0;
  v32 = 0;
  Str1 = nullptr;
  v34 = 0;
  v35 = 0;
  sub_1400545C0(*(_QWORD *)(a1 + 80));
  v8 = (char *)::Str1;
  if ( (unsigned __int8)sub_140069450(Src, 2u) )
  {
    v9 = strlen(Src);
    v10 = v9;
    if ( v9 )
    {
      v11 = v9 + 1;
      if ( v9 + 1 <= v32 )
      {
        v12 = Block;
      }
      else
      {
        v12 = sub_14005ABE0((__int64)&Block, Block, v9 + 1, 1u);
        Block = v12;
      }
      v31 = v11;
      memcpy(v12, Src, v10);
      *((_BYTE *)Block + v10) = 0;
      v13 = v31;
      if ( v31 )
      {
        v14 = Block;
        v15 = (const char *)Block;
LABEL_29:
        v16 = (char *)::Str1;
        if ( v34 )
          v16 = Str1;
        if ( !strcmp(v16, v15) )
        {
          if ( v14 )
          {
            v31 = 0;
            j_free(v14);
            Block = nullptr;
            v32 = 0;
          }
        }
        else
        {
          v17 = v13 - 1;
          if ( !v13 )
            v17 = 0;
          if ( v17 + 9 > v32 )
          {
            v14 = sub_14005ABE0((__int64)&Block, v14, v17 + 9, 1u);
            Block = v14;
          }
          v31 = v17 + 9;
          *((_BYTE *)v14 + v17 + 8) = 0;
          if ( v17 )
          {
            memcpy((char *)Block + 8, Block, v17);
            v17 = 0;
          }
          *(_QWORD *)((char *)Block + v17) = 0x20706920796D2820LL;
          v18 = v31 - 1;
          if ( !v31 )
            v18 = 0;
          if ( v18 + 2 <= v32 )
          {
            v19 = Block;
          }
          else
          {
            v19 = sub_14005ABE0((__int64)&Block, Block, v18 + 2, 1u);
            Block = v19;
          }
          v31 = v18 + 2;
          *((_BYTE *)v19 + v18 + 1) = 0;
          *((_BYTE *)Block + v18) = 41;
        }
        goto LABEL_46;
      }
    }
    else
    {
      v13 = 0;
      v31 = 0;
    }
    v15 = ::Str1;
    v14 = Block;
    goto LABEL_29;
  }
LABEL_46:
  v20 = sub_14005A7C0();
  sub_140054690(v45, 25, v20, 0);
  v21 = ::Str1;
  if ( v31 )
    v21 = (const char *)Block;
  if ( v34 )
    v8 = Str1;
  sub_1400542D0("%s Listening on %s:%u%s...\n", (const char *)v45, v8, *(unsigned __int16 *)(a1 + 104), v21);
  while ( *(_QWORD *)(a1 + 80) )
  {
    v36[0] = (__int64)sub_1400543F0(*(_BYTE *)(a1 + 106));
    if ( (unsigned __int8)sub_1400543A0(v36[0])
      && (v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 16LL))(a1, v36[0])) != nullptr )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88)) )
      {
        v23 = (__int64 *)operator new(0x18u);
        v24 = v23;
        v44 = v23;
        if ( v23 )
        {
          *v23 = a1;
          v23[1] = (__int64)v22;
          v23[2] = (__int64)sub_14005D6F0(nullptr, 0);
        }
        else
        {
          v24 = nullptr;
        }
        v25 = sub_14005D830((LPTHREAD_START_ROUTINE)sub_140054200, v24);
        if ( v25 )
        {
          sub_140053750(a1, (unsigned __int64)v22, (__int64)v25);
          v27 = (void *)v24[2];
          if ( v27 )
            sub_14005D730(v27);
        }
        else
        {
          v26 = (const char *)sub_140063E00(-1);
          sub_1400497B0((__int64)v22, "Failed to create thread: %s; cannot handle session\n", v26);
          (*(void (__fastcall **)(__int64 *, __int64))*v22)(v22, 1);
          if ( v24 )
          {
            *v24 = 0;
            v24[1] = 0;
            sub_14005D710((void *)v24[2]);
            v24[2] = 0;
            j_j_free(v24);
          }
        }
      }
      else
      {
        sub_140053750(a1, (unsigned __int64)v22, 0);
        sub_140053EF0(a1, v22);
      }
    }
    else
    {
      sub_1400545F0(v36);
      if ( !*(_QWORD *)(a1 + 80) )
        break;
      sub_1400542D0("Rejected client\n");
    }
  }
  if ( Str1 )
  {
    v34 = 0;
    j_free(Str1);
    Str1 = nullptr;
    v35 = 0;
  }
  if ( Block )
  {
    v31 = 0;
    j_free(Block);
    Block = nullptr;
    v32 = 0;
  }
  if ( v42[0] )
  {
    v42[1] = nullptr;
    j_free(v42[0]);
    v42[0] = nullptr;
    v43 = 0;
  }
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    j_free(v40);
    v40 = nullptr;
    *((_QWORD *)&v41 + 1) = 0;
  }
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    j_free(v37);
  }
}
