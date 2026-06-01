unsigned __int64 __fastcall sub_15B8230(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int16 v7; // ax
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // r13
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 *v22; // rdx
  signed __int64 v23; // r14
  __int64 *v24; // r12
  __int64 v25; // r13
  char *v26; // rax
  __int64 v27; // rax
  __int64 v28; // r12
  __int64 *v29; // rax
  unsigned __int64 v30; // rax
  void *v31[2]; // [rsp+0h] [rbp-48h] BYREF
  char *v32; // [rsp+10h] [rbp-38h]

  v7 = *(_WORD *)a2 & 0x1FF;
  if ( v7 == 109 )
  {
    sub_15B8900(v31, a1, a2);
    v9 = (__int64 *)v31[1];
    v10 = (__int64 *)v31[0];
    goto LABEL_3;
  }
  if ( v7 == 69 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v14 = 0;
    if ( v13 )
    {
      v15 = sub_E90000(*(_QWORD *)(a2 + 16));
      if ( v15 )
      {
        if ( v15 == 3 && ((*(__int64 *)(v13 + 8) >> 1) & 3) == 2 )
          v14 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v14 = sub_15B7950(a1, v13);
      }
    }
    v16 = sub_15B84F0(a1, v14, 0, 0);
    sub_15B7680((__int64)v31, (__int64)a1, v16, *(_QWORD *)(a2 + 32));
    v9 = (__int64 *)v31[1];
    v10 = (__int64 *)v31[0];
    if ( v31[0] != v31[1] )
      goto LABEL_4;
    goto LABEL_15;
  }
  if ( (unsigned int)v7 - 23 <= 1 )
  {
    v21 = *(unsigned int *)(a2 + 4);
    v22 = (__int64 *)(a2 + 64);
    v8 = (__int64 *)(a2 + 80);
    if ( v7 != 24 )
      v22 = (__int64 *)(a2 + 80);
    v32 = nullptr;
    v23 = 8 * v21;
    *(_OWORD *)v31 = 0;
    v24 = v22;
    v25 = v23 >> 3;
    if ( v23 )
    {
      v26 = (char *)operator new(v23);
      v8 = v24;
      v31[0] = v26;
      v10 = (__int64 *)v26;
      v9 = (__int64 *)v26;
      v32 = &v26[v23];
      do
      {
        v27 = *v8;
        ++v9;
        ++v8;
        *(v9 - 1) = v27 & 0xFFFFFFFFFFFFFFF8LL;
        --v25;
      }
      while ( v25 );
    }
    else
    {
      v10 = nullptr;
      v9 = nullptr;
    }
LABEL_25:
    v31[1] = v9;
    goto LABEL_3;
  }
  if ( ((v7 + 423) & 0x1FFu) > 4 )
  {
    if ( v7 != 46 )
      return *(_QWORD *)(a2 + 8);
    v28 = *(_QWORD *)(a2 + 24);
    *(_OWORD *)v31 = 0;
    v29 = (__int64 *)operator new(8u);
    v9 = v29 + 1;
    v10 = v29;
    v31[0] = v29;
    v32 = (char *)(v29 + 1);
    *v29 = v28;
    goto LABEL_25;
  }
  sub_15B8CB0(v31, a1, a2);
  v9 = (__int64 *)v31[1];
  v10 = (__int64 *)v31[0];
LABEL_3:
  if ( v10 != v9 )
  {
LABEL_4:
    v11 = 0;
    if ( (char *)v9 - (char *)v10 == 8 )
    {
      v17 = *v10;
      v18 = *(_BYTE *)(*v10 + 28) & 0x7F;
      v19 = (unsigned int)(v18 - 58);
      if ( (unsigned int)v19 > 9 )
      {
        if ( (unsigned int)(v18 - 26) <= 0x1A )
          v11 = *(_QWORD *)(v17 + 48);
      }
      else
      {
        v20 = *(_QWORD *)(v17 + 48);
        if ( v20 )
        {
          v11 = v20 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v30 = sub_A7AA70(*a1, v17, v19, (__int64)v8, a5, a6);
          v10 = (__int64 *)v31[0];
          v11 = v30;
        }
      }
    }
    goto LABEL_5;
  }
LABEL_15:
  v11 = *(_QWORD *)(a2 + 8);
LABEL_5:
  if ( v10 )
    operator delete(v10);
  return v11;
}
