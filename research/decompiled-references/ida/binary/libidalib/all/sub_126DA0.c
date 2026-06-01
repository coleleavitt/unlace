unsigned __int64 __fastcall sub_126DA0(__int64 *a1, const char *a2, int a3, unsigned __int64 a4)
{
  size_t v8; // rax
  __int64 v9; // rbp
  size_t v10; // r13
  size_t v11; // r8
  __int64 v12; // rsi
  size_t v13; // rdx
  void *v14; // rdi
  char *v15; // rbp
  char i; // al
  const char *v17; // rbp
  unsigned int v18; // eax
  unsigned int v19; // ecx
  __int64 *v20; // r15
  int v21; // edx
  unsigned int v22; // r14d
  int v23; // ebx
  int v24; // r13d
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  __int64 v27; // rsi
  __int64 v28; // r12
  char v29; // r11
  __int64 v30; // rax
  __int64 v31; // r12
  unsigned __int64 v32; // rdx
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rbp
  unsigned __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rbp
  unsigned __int64 v43; // r12
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // [rsp+8h] [rbp-4A0h]
  unsigned __int64 v48; // [rsp+8h] [rbp-4A0h]
  size_t v49; // [rsp+8h] [rbp-4A0h]
  char v50; // [rsp+10h] [rbp-498h]
  size_t v51; // [rsp+10h] [rbp-498h]
  __int64 v52; // [rsp+18h] [rbp-490h]
  unsigned int v53; // [rsp+20h] [rbp-488h]
  int v54; // [rsp+24h] [rbp-484h]
  unsigned __int64 v55; // [rsp+28h] [rbp-480h]
  char v56; // [rsp+60h] [rbp-448h] BYREF
  unsigned __int64 v57; // [rsp+468h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v8 = strlen(a2);
  v9 = a1[1];
  v10 = v8;
  v11 = v8;
  if ( v9 )
  {
    --v9;
    v11 = v8 + v9;
  }
  v12 = *a1;
  v13 = v11 + 1;
  if ( a1[2] < v11 + 1 )
  {
    v51 = v11;
    v49 = v11 + 1;
    v37 = qvector_reserve();
    v11 = v51;
    v13 = v49;
    *a1 = v37;
    v12 = v37;
  }
  a1[1] = v13;
  *(_BYTE *)(v12 + v11) = 0;
  v14 = (void *)(v9 + *a1);
  v15 = &v56;
  memmove(v14, a2, v10);
  b2a64();
  for ( i = v56; i == 48; ++v15 )
    i = v15[1];
  v17 = &v15[-(i == 0)];
  v18 = strlen(v17);
  v19 = (a3 == 16) + 3;
  v54 = a3;
  v55 = a4;
  v20 = a1;
  v21 = v18 % v19;
  v53 = v19;
  v22 = v18;
  if ( !(v18 % v19) )
    v21 = v19;
  v23 = 1 - (_DWORD)v17;
  v24 = v21;
  while ( 1 )
  {
    v28 = v20[1];
    v29 = *v17;
    if ( v28 )
    {
      v25 = v28 + 1;
      v26 = v20[1];
      v27 = *v20;
      --v28;
      if ( v20[2] >= v25 )
        goto LABEL_11;
    }
    else
    {
      v27 = *v20;
      v26 = 1;
      v25 = 2;
      if ( (unsigned __int64)v20[2] >= 2 )
        goto LABEL_11;
    }
    v52 = v26;
    v50 = *v17;
    v47 = v25;
    v30 = qvector_reserve();
    v26 = v52;
    v29 = v50;
    *v20 = v30;
    v25 = v47;
    v27 = v30;
LABEL_11:
    v20[1] = v25;
    *(_BYTE *)(v27 + v28) = v29;
    *(_BYTE *)(*v20 + v26) = 0;
    if ( v23 + (int)v17 >= v22 )
      break;
    if ( --v24 )
      goto LABEL_13;
    v31 = v20[1];
    if ( v31 )
    {
      v32 = v31 + 1;
      v33 = v20[1];
      v34 = *v20;
      --v31;
      if ( v20[2] < v32 )
        goto LABEL_21;
    }
    else
    {
      v34 = *v20;
      v33 = 1;
      v32 = 2;
      if ( (unsigned __int64)v20[2] < 2 )
      {
LABEL_21:
        v48 = v32;
        v35 = qvector_reserve();
        v32 = v48;
        *v20 = v35;
        v34 = v35;
      }
    }
    v20[1] = v32;
    *(_BYTE *)(v34 + v31) = 32;
    *(_BYTE *)(*v20 + v33) = 0;
    v24 = v53;
LABEL_13:
    ++v17;
  }
  if ( v54 == 16 )
  {
    if ( *(_QWORD *)(get_eah() + 16) < v55 )
    {
      getinf_buf();
    }
    else if ( get_ea_name() > 0 )
    {
      v38 = v20[1];
      if ( v38 )
      {
        v40 = v38 + 1;
        v39 = v38 + 2;
        --v38;
      }
      else
      {
        v39 = 3;
        v40 = 2;
      }
      v41 = *v20;
      if ( v20[2] < v39 )
      {
        v45 = qvector_reserve();
        *v20 = v45;
        v41 = v45;
      }
      v20[1] = v39;
      *(_BYTE *)(v41 + v40) = 0;
      *(_WORD *)(*v20 + v38) = 10272;
      v42 = v20[1];
      v43 = 2;
      if ( v42 )
        v43 = v42-- + 1;
      v44 = *v20;
      if ( v20[2] < v43 )
      {
        v46 = qvector_reserve();
        *v20 = v46;
        v44 = v46;
      }
      v20[1] = v43;
      *(_BYTE *)(v44 + v42) = 41;
      *(_BYTE *)(*v20 + v42 + 1) = 0;
    }
  }
  return v57 - __readfsqword(0x28u);
}

