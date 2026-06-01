__int64 __fastcall sub_17A32D0(__int64 a1, int *a2, __int64 a3, __int64 *a4, char a5, char a6)
{
  __int64 result; // rax
  _QWORD *v7; // r15
  _QWORD *v11; // rbp
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  int v17; // edx
  int v18; // ebx
  void *v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // [rsp+8h] [rbp-60h]
  char v43; // [rsp+17h] [rbp-51h]
  __int64 v44; // [rsp+18h] [rbp-50h]
  __int64 v45; // [rsp+18h] [rbp-50h]
  __int64 v47; // [rsp+28h] [rbp-40h]

  v40 = a1 + 2608;
  result = (unsigned int)a2[4];
  v43 = 0;
  if ( !(_DWORD)result )
    return result;
  v7 = *((_QWORD **)a2 + 1);
  do
  {
    while ( 1 )
    {
      v11 = v7 + 1;
      v12 = *v7 & 0xFFFFFFFFFFFFFFF8LL;
      if ( sub_15C11F0(v40, v12, a3, a4, a6) )
        goto LABEL_6;
      if ( !a5 )
        goto LABEL_9;
      if ( !v12 )
        goto LABEL_9;
      v44 = *(_QWORD *)(a1 + 248);
      if ( !(unsigned __int8)sub_B843B0((_BYTE *)v12) )
        goto LABEL_9;
      if ( (*(_BYTE *)(*(_QWORD *)(v44 + 2320) + 1LL) & 8) != 0 )
        break;
LABEL_6:
      ++v7;
      result = (unsigned int)a2[4];
      if ( v11 == (_QWORD *)(*((_QWORD *)a2 + 1) + 8 * result) )
        goto LABEL_12;
    }
    v20 = sub_B8EAA0(a3);
    v23 = *(_BYTE *)(v20 + 8) & 0x7F;
    if ( (unsigned __int8)v23 > 0x12u )
    {
      v23 = ((_BYTE)v23 + 94) & 0x7F;
      if ( (unsigned __int8)v23 > 5u )
        goto LABEL_9;
    }
    else if ( ((1LL << v23) & 0x40182) == 0 )
    {
      goto LABEL_9;
    }
    v24 = *(_QWORD *)(v12 + 16);
    v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v24 & 4) != 0 )
      v25 = *(_QWORD *)v25;
    v26 = *(unsigned __int8 *)(v25 + 8);
    v27 = ((_BYTE)v26 + 70) & 0x7F;
    if ( (unsigned __int8)v27 > 3u )
    {
      v45 = sub_B916A0(v20, v26, v27, v23, v21, v22);
      v47 = sub_B916A0(v25, v26, v28, v29, v30, v31);
      if ( v47 )
      {
        v36 = sub_B91570(v45, v26, v32, v33, v34, v35);
        if ( v36 == sub_B91570(v47, v26, v47, v37, v38, v39) )
          goto LABEL_6;
      }
    }
LABEL_9:
    v13 = (unsigned int)a2[4];
    v14 = *((_QWORD *)a2 + 1);
    v15 = *(_QWORD *)(v14 + 8 * v13 - 8);
    v16 = (unsigned int)(v13 - 1);
    result = v16;
    a2[4] = v16;
    if ( v7 != (_QWORD *)(v14 + 8 * v16) )
    {
      *v7 = v15;
      v16 = (unsigned int)a2[4];
      v14 = *((_QWORD *)a2 + 1);
      result = v16;
    }
    v43 = 1;
  }
  while ( v7 != (_QWORD *)(v14 + 8 * v16) );
LABEL_12:
  if ( v43 )
  {
    v17 = *a2;
    if ( (_DWORD)result )
    {
      v18 = 0;
      if ( v17 == 5 )
        v18 = a2[1];
      *a2 = 2;
      result = sub_1A43500(a2);
      if ( *a2 == 5 )
      {
        a2[1] = v18;
        return result;
      }
    }
    else if ( v17 != 1 )
    {
      *a2 = 0;
    }
    v19 = *((void **)a2 + 11);
    if ( v19 )
    {
      result = sub_1A39780(v19);
      *((_QWORD *)a2 + 11) = 0;
    }
  }
  return result;
}
