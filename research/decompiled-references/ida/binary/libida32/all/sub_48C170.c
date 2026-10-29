unsigned __int64 __fastcall sub_48C170(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r15
  _QWORD *v4; // r13
  __int64 v5; // r12
  int v6; // ebx
  unsigned __int64 result; // rax
  int v8; // edi
  __int64 v9; // r14
  int v10; // r12d
  int i; // r15d
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // rbp
  int v16; // r12d
  __int64 v17; // r15
  int v18; // edi
  __int64 v19; // rbx
  __int64 v20; // r13
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // [rsp+0h] [rbp-78h]
  int v24; // [rsp+0h] [rbp-78h]
  int v25; // [rsp+8h] [rbp-70h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  __int64 v27; // [rsp+10h] [rbp-68h]
  int v28; // [rsp+10h] [rbp-68h]
  int v29; // [rsp+1Ch] [rbp-5Ch]
  __int64 v30; // [rsp+20h] [rbp-58h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  unsigned __int64 v32; // [rsp+30h] [rbp-48h]

  v2 = a1;
  v3 = 0;
  v4 = a2;
  v5 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 28LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 48LL);
  v8 = v6 - 1;
  if ( result )
  {
    while ( v8 <= 0 )
    {
      ++v3;
      v5 += 416;
      if ( result == v3 )
        goto LABEL_4;
    }
    v24 = v6;
    v14 = v3;
    v31 = v2 + 8;
    v32 = result;
    v29 = v6 - 1;
    v26 = v2;
    do
    {
      v30 = v14;
      v15 = v5;
      v16 = 0;
      v17 = v31;
      do
      {
        v18 = v16++;
        if ( v24 > v16 )
        {
          v28 = v16;
          v19 = v17;
          v20 = v15 + *(_QWORD *)(*(_QWORD *)(v17 + 144) + 40LL) + 192;
          do
          {
            v21 = *(_QWORD *)(v19 + 152);
            v22 = v16++;
            v19 += 8;
            sub_48BF20(v26, v20, v15 + *(_QWORD *)(v21 + 40) + 192, v18, v22);
          }
          while ( v24 > v16 );
          v16 = v28;
        }
        result = (unsigned int)v29;
        v17 += 8;
      }
      while ( v16 < v29 );
      v5 = v15 + 416;
      v14 = v30 + 1;
    }
    while ( v32 != v30 + 1 );
    v6 = v24;
    v8 = v29;
    v2 = v26;
    v4 = a2;
  }
LABEL_4:
  if ( v8 > 0 )
  {
    v27 = 24;
    v25 = 0;
    v23 = v2;
    do
    {
      v9 = v27;
      v10 = v25;
      result = (unsigned int)(v25 + 1);
      v25 = result;
      for ( i = result; v6 > i; result = sub_48BF20(v23, v27 - 24 + *v4, v13, v10, v12) )
      {
        v12 = i++;
        v13 = *v4 + v9;
        v9 += 24;
      }
      v27 += 24;
    }
    while ( v25 != v8 );
  }
  return result;
}

