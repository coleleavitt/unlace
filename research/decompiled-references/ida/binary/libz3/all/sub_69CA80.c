__int64 *__fastcall sub_69CA80(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rax
  int v10; // r8d
  int v11; // r9d
  __int64 v12; // rax
  int v13; // edx
  int v14; // esi
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  _DWORD *v22; // rdx
  __int64 v23; // rsi
  _QWORD *v24; // rcx
  unsigned __int64 v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rdi
  bool v28; // zf
  __int64 v29; // rdi
  void (__fastcall ***v30)(void *); // r13
  __int64 v31; // rax
  __int64 v32; // r15
  void (__fastcall ***v33)(void *); // r14
  void *v34; // r14
  void (__fastcall ***v35)(void *); // r15
  __int64 v36; // [rsp+8h] [rbp-D8h]
  int v37; // [rsp+8h] [rbp-D8h]
  _QWORD *v38; // [rsp+8h] [rbp-D8h]
  char v39[8]; // [rsp+18h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+20h] [rbp-C0h]
  __int64 v41; // [rsp+28h] [rbp-B8h]
  _BYTE v42[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = a2 + 96;
  v4 = a2;
  sub_11C7890(a2 + 96);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_DWORD *)(a2 + 4560);
  v41 = 0;
  v40 = v5;
  v7 = *(_QWORD *)(a2 + 4624);
  if ( v7 )
  {
    if ( v6 == *(_DWORD *)(v7 - 4) )
      goto LABEL_3;
  }
  else if ( !v6 )
  {
    goto LABEL_3;
  }
  *(_BYTE *)(a2 + 4744) = 0;
  sub_11C7890(a2 + 96);
  sub_786C50(a2 + 4544, *(_QWORD *)(a2 + 8), a2 + 4360, v2, a2 + 4648, a2 + 4504, 1);
  v12 = *(_QWORD *)(a2 + 4624);
  v13 = *(_DWORD *)(a2 + 4560);
  if ( v12 )
    v14 = *(_DWORD *)(v12 - 4);
  else
    v14 = 0;
  sub_787B60(v4 + 4544, v14 - v13, v12 + 8 * v13, v12 + 8 * v13, v10, v11);
  v36 = *(_QWORD *)(v4 + 4704);
  if ( !v36 )
  {
    v36 = sub_186B270(0x68u);
    sub_781140(v36, *(_QWORD *)(v4 + 8));
    ++*(_DWORD *)(v36 + 8);
    v35 = *(void (__fastcall ****)(void *))(v4 + 4704);
    if ( v35 )
    {
      v28 = (*((_DWORD *)v35 + 2))-- == 1;
      if ( v28 )
      {
        (**v35)(v35);
        sub_186B220(v35);
      }
    }
    *(_QWORD *)(v4 + 4704) = v36;
  }
  a2 = v2;
  sub_7826B0(v36, v2, v4 + 4648);
  v15 = *(_QWORD *)(v4 + 4624);
  if ( v15 )
    v16 = *(_DWORD *)(v15 - 4);
  else
    v16 = 0;
  *(_DWORD *)(v4 + 4560) = v16;
  sub_18290A0(*(_QWORD *)(v4 + 8));
  v17 = *(_QWORD *)(v4 + 4624);
  if ( v17 )
    v18 = *(_DWORD *)(v17 - 4);
  else
    v18 = 0;
  if ( *(_DWORD *)(v4 + 4560) == v18 )
  {
LABEL_3:
    if ( !*(_BYTE *)(v4 + 4744) )
    {
      sub_7811A0(v39, a2);
      v22 = *(_DWORD **)(v4 + 4696);
      if ( v22 )
      {
        v37 = v22[2];
        v22[2] = v37 - 1;
        if ( v37 == 1 )
        {
          v34 = v22;
          (**(void (__fastcall ***)(_DWORD *))v22)(v22);
          sub_186B220(v34);
        }
      }
      v23 = *(_QWORD *)(v4 + 8);
      *(_QWORD *)(v4 + 4696) = 0;
      sub_ED2A30(v42, v23, 0, 1, 0);
      sub_782860((unsigned int)v39, v2, v4 + 4648, v4 + 4360, (unsigned int)v42, v4 + 4704);
      v24 = *(_QWORD **)(v4 + 4640);
      v38 = v24;
      if ( v24 )
      {
        v25 = (unsigned __int64)&v24[*((unsigned int *)v24 - 1)];
        if ( (unsigned __int64)v24 >= v25 )
          goto LABEL_33;
        do
        {
          v26 = *v38;
          if ( *v38 )
          {
            v27 = *(_QWORD *)(v4 + 4632);
            v28 = (*(_DWORD *)(v26 + 8))-- == 1;
            if ( v28 )
              sub_15D7BC0(v27, v26);
          }
          ++v38;
        }
        while ( (unsigned __int64)v38 < v25 );
        v38 = *(_QWORD **)(v4 + 4640);
        if ( v38 )
LABEL_33:
          *((_DWORD *)v38 - 1) = 0;
      }
      sub_ED6190(v42, v4 + 4632);
      *(_BYTE *)(v4 + 4744) = 1;
      sub_ED44E0(v42);
    }
    v8 = *(_QWORD *)(v4 + 4696);
    if ( v8 )
      goto LABEL_5;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v4 + 4696);
  if ( v8 )
  {
LABEL_5:
    *a1 = v8;
    ++*(_DWORD *)(v8 + 8);
    return a1;
  }
LABEL_17:
  v19 = *(_QWORD *)(v4 + 4624);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  if ( *(_DWORD *)(v4 + 4560) == v20 && *(_BYTE *)(v4 + 4744) )
  {
    v29 = *(_QWORD *)(v4 + 4704);
    if ( v29 )
    {
      sub_7826B0(v29, v2, v4 + 4648);
      v29 = *(_QWORD *)(v4 + 4704);
    }
    v30 = *(void (__fastcall ****)(void *))(v4 + 56);
    if ( v30 )
      ++*((_DWORD *)v30 + 2);
    v31 = sub_1336AB0(v30, v29);
    v32 = v31;
    if ( v31 )
    {
      v33 = *(void (__fastcall ****)(void *))(v4 + 4696);
      ++*(_DWORD *)(v31 + 8);
      if ( !v33 )
      {
        *(_QWORD *)(v4 + 4696) = v31;
        if ( !v30 || (v28 = *((_DWORD *)v30 + 2) == 1, --*((_DWORD *)v30 + 2), !v28) )
        {
          *a1 = v31;
          goto LABEL_47;
        }
        goto LABEL_63;
      }
    }
    else
    {
      v33 = *(void (__fastcall ****)(void *))(v4 + 4696);
      if ( !v33 )
      {
        *(_QWORD *)(v4 + 4696) = 0;
        if ( !v30 || (v28 = *((_DWORD *)v30 + 2) == 1, --*((_DWORD *)v30 + 2), !v28) )
        {
          *a1 = 0;
          return a1;
        }
        goto LABEL_63;
      }
    }
    v28 = (*((_DWORD *)v33 + 2))-- == 1;
    if ( v28 )
    {
      (**v33)(v33);
      sub_186B220(v33);
    }
    *(_QWORD *)(v4 + 4696) = v32;
    if ( !v30 || (v28 = *((_DWORD *)v30 + 2) == 1, --*((_DWORD *)v30 + 2), !v28) )
    {
LABEL_46:
      *a1 = v32;
      if ( !v32 )
        return a1;
LABEL_47:
      ++*(_DWORD *)(v32 + 8);
      return a1;
    }
LABEL_63:
    (**v30)(v30);
    sub_186B220(v30);
    v32 = *(_QWORD *)(v4 + 4696);
    goto LABEL_46;
  }
  v21 = *(_QWORD *)(v4 + 56);
  *a1 = v21;
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  return a1;
}

