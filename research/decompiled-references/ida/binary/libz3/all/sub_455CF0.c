__int64 __fastcall sub_455CF0(__int64 a1, __int64 *a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  int v17; // r8d
  int v18; // r9d
  __int64 i; // r13
  __int64 v20; // rdx
  int v21; // ecx
  int v22; // r8d
  int v23; // r9d
  __int64 v24; // rdi
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  __int64 *v32; // rbx
  __int64 *v33; // r12
  __int64 v34; // rsi
  __int64 v36; // r13
  __int64 v37; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v38; // [rsp+8h] [rbp-130h]
  int v39; // [rsp+10h] [rbp-128h] BYREF
  int v40; // [rsp+18h] [rbp-120h]
  __int64 v41; // [rsp+20h] [rbp-118h]
  __int64 v42; // [rsp+28h] [rbp-110h]
  __int64 v43; // [rsp+30h] [rbp-108h]
  int v44; // [rsp+38h] [rbp-100h]
  int v45; // [rsp+40h] [rbp-F8h]
  int v46; // [rsp+48h] [rbp-F0h]
  __int64 v47; // [rsp+50h] [rbp-E8h]

  result = *(_QWORD *)(sub_4095A0(*a2, (__int64)a2, a3, a4, a5, a6) + 8);
  if ( !result )
    return result;
  result = *(unsigned int *)(result - 4);
  if ( !(_DWORD)result )
    return result;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 152LL);
  sub_E92440((unsigned int)&v39, v11, v7, v8, v9, v10, v37);
  v16 = *(_QWORD *)(sub_4095A0(*a2, v11, v12, v13, v14, v15) + 8);
  if ( v16 )
  {
    for ( i = v16 + 8LL * *(unsigned int *)(v16 - 4); i != v16; v16 += 8 )
      sub_E8F9F0((int)&v39, v37, (int)v38, v39, v40, v41, v42, v43);
  }
  sub_E8DBC0(
    (unsigned int)&v39,
    (unsigned int)&v37,
    1,
    1,
    v17,
    v18,
    v11,
    0,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v24 = *a2;
  if ( !v38 )
  {
    v26 = *(_QWORD *)(sub_4095A0(v24, (__int64)&v37, v20, v21, v22, v23) + 8);
    v25 = 0;
    if ( !v26 )
      goto LABEL_23;
    goto LABEL_8;
  }
  v25 = *((_DWORD *)v38 - 1);
  v26 = *(_QWORD *)(sub_4095A0(v24, (__int64)&v37, v20, v21, v22, v23) + 8);
  if ( v26 )
  {
LABEL_8:
    v31 = *(_DWORD *)(v26 - 4);
    goto LABEL_9;
  }
  v31 = 0;
LABEL_9:
  if ( v31 != v25 )
  {
LABEL_10:
    sub_40ABA0(*a2, *a2 + 80, (__int64)&v37);
    goto LABEL_11;
  }
LABEL_23:
  v36 = *v38;
  if ( v36 != **(_QWORD **)(sub_4095A0(*a2, (__int64)&v37, v27, v28, v29, v30) + 8) )
    goto LABEL_10;
LABEL_11:
  v32 = v38;
  if ( v38 )
  {
    v33 = &v38[*((unsigned int *)v38 - 1)];
    if ( v38 >= v33 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v34 = *v32;
        if ( *v32 )
        {
          if ( (*(_DWORD *)(v34 + 8))-- == 1 )
            break;
        }
        if ( ++v32 >= v33 )
          goto LABEL_18;
      }
      sub_15D7BC0(v37, v34);
      ++v32;
    }
    while ( v32 < v33 );
LABEL_18:
    v32 = v38;
    if ( v38 )
LABEL_19:
      sub_186B220(v32 - 1);
  }
  return sub_E8B810(&v39);
}

