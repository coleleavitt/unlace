__int64 __fastcall sub_41D6A0(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  void *v9; // rbx
  int v10; // eax
  __int64 v11; // rsi
  int v12; // eax
  unsigned int v13; // edx
  int v14; // esi
  int v15; // eax
  __int64 v16; // rdi
  void *v17; // rbx
  __int64 v18; // rax
  int v19; // r12d
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rbp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rsi
  __int64 v27; // rax
  void *v28; // rdi
  __int64 v29; // rbx
  int v30; // eax
  int v31; // [rsp+Ch] [rbp-3Ch] BYREF
  int v32; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+14h] [rbp-34h] BYREF

  if ( (unsigned int)(a3 - 2) > 2 )
  {
    sub_458930(a2, 1, a4, "string ?first? ?last?");
    return 1;
  }
  v7 = a4[1];
  if ( *(_QWORD *)(v7 + 8) )
  {
    v8 = *(_DWORD *)(v7 + 16);
    v9 = *(void **)(v7 + 8);
    v33 = v8;
    if ( a3 != 2 )
      goto LABEL_4;
LABEL_19:
    v27 = sub_48DF10(v9, v8);
    v28 = *(void **)(v27 + 8);
    v29 = v27;
    if ( !v28 )
      v28 = (void *)sub_47B3B0(v27);
    v33 = sub_49C1C0(v28);
    sub_48E1A0(v29, v33);
    v25 = v29;
LABEL_16:
    sub_48AFD0(a2, v25);
    return 0;
  }
  v9 = (void *)sub_47ACD0(v7, &v33);
  v8 = v33;
  if ( a3 == 2 )
    goto LABEL_19;
LABEL_4:
  v10 = sub_49BD60(v9);
  v11 = a4[2];
  v33 = v10 - 1;
  v12 = sub_49FAC0(a2, v11, (unsigned int)(v10 - 1), &v32);
  v13 = 1;
  if ( !v12 )
  {
    v14 = v32;
    if ( v32 < 0 )
    {
      v14 = 0;
      v32 = 0;
    }
    v15 = v14;
    v31 = v14;
    if ( a3 == 4 )
    {
      v30 = sub_49FAC0(a2, a4[3], v33, &v31);
      v13 = 1;
      if ( v30 )
        return v13;
      v14 = v32;
      v15 = v31;
    }
    if ( v15 >= (int)v33 )
    {
      v15 = v33;
      v31 = v33;
    }
    if ( v15 < v14 )
    {
      v25 = a4[1];
    }
    else
    {
      v16 = a4[1];
      if ( *(_QWORD *)(v16 + 8) )
      {
        v17 = *(void **)(v16 + 8);
        v33 = *(_DWORD *)(v16 + 16);
      }
      else
      {
        v17 = (void *)sub_47ACD0(v16, &v33);
      }
      v18 = sub_49BFA0(v17);
      v19 = v18;
      v20 = v18 - (_QWORD)v17;
      v21 = sub_49BFA0(v18);
      v22 = sub_48DF10(v17, (unsigned int)(v21 - (_DWORD)v17));
      v23 = *(_QWORD *)(v22 + 8);
      if ( !v23 )
        v23 = sub_47B3B0(v22);
      v24 = sub_49C1C0((void *)(v23 + v20));
      sub_48E1A0(v22, (unsigned int)(v24 + v19 - (_DWORD)v17));
      sub_48EDF0(v22, v21, 0xFFFFFFFFLL);
      v25 = v22;
    }
    goto LABEL_16;
  }
  return v13;
}

