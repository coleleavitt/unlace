__int64 __fastcall sub_1FC5DF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // r12d
  unsigned int v6; // ebx
  unsigned __int64 v7; // rcx
  __int64 v8; // r10
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // r10
  __int64 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+18h] [rbp-60h]
  __int64 v30; // [rsp+18h] [rbp-60h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  __int64 v32; // [rsp+18h] [rbp-60h]
  __int64 v33; // [rsp+18h] [rbp-60h]
  _QWORD v34[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_1FC2690(a1, a2);
  sub_9B9C90(*(_QWORD *)(a1 + 24), *(unsigned int *)(a2 + 28));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 16), *(_QWORD *)(a1 + 24));
  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 20), *(_QWORD *)(a1 + 24));
  result = sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 24), *(_QWORD *)(a1 + 24));
  v5 = *(_DWORD *)(a2 + 28);
  if ( v5 )
  {
    v6 = 0;
    v27 = a1 + 32;
    v28 = a1 + 48;
    do
    {
      while ( 1 )
      {
        v22 = sub_C03D50(a2, v6);
        sub_1F92A90(*(_QWORD *)(a1 + 16), v22, *(_QWORD *)(a1 + 24));
        v23 = sub_C03DA0(a2, v6);
        sub_1F6F570(*(_QWORD **)(a1 + 16), v23, *(_QWORD *)(a1 + 24));
        sub_C03D60(v34, a2, v6);
        v24 = *(unsigned int *)(a1 + 40);
        v25 = v34[2];
        v26 = v34[0];
        if ( v24 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
        {
          v29 = v34[0];
          sub_2237220(v27, v28, v24 + 1, 8);
          v24 = *(unsigned int *)(a1 + 40);
          v26 = v29;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v24) = v26;
        v7 = *(unsigned int *)(a1 + 44);
        v8 = v34[1];
        v9 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v9;
        if ( v9 + 1 > v7 )
        {
          v33 = v8;
          sub_2237220(v27, v28, v9 + 1, 8);
          v9 = *(unsigned int *)(a1 + 40);
          v8 = v33;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v9) = v8;
        v10 = *(unsigned int *)(a1 + 44);
        v11 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v11;
        if ( v11 + 1 > v10 )
        {
          sub_2237220(v27, v28, v11 + 1, 8);
          v11 = *(unsigned int *)(a1 + 40);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v11) = v25;
        ++*(_DWORD *)(a1 + 40);
        v12 = sub_C03DC0(a2, v6);
        sub_1F6F570(*(_QWORD **)(a1 + 16), v12, *(_QWORD *)(a1 + 24));
        if ( v25 )
        {
          v13 = sub_C03DE0(a2, v6);
          sub_1F6F570(*(_QWORD **)(a1 + 16), v13, *(_QWORD *)(a1 + 24));
        }
        v14 = (__int64 *)sub_C03E40(a2, v6);
        sub_1F92A90(*(_QWORD *)(a1 + 16), *v14, *(_QWORD *)(a1 + 24));
        v15 = *(unsigned int *)(a1 + 40);
        v16 = v14[1];
        if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
        {
          v32 = v14[1];
          sub_2237220(v27, v28, v15 + 1, 8);
          v15 = *(unsigned int *)(a1 + 40);
          v16 = v32;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v15) = v16;
        v17 = *(unsigned int *)(a1 + 44);
        v18 = v14[2];
        v19 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v19;
        if ( v19 + 1 > v17 )
        {
          v31 = v18;
          sub_2237220(v27, v28, v19 + 1, 8);
          v19 = *(unsigned int *)(a1 + 40);
          v18 = v31;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v19) = v18;
        v20 = *(unsigned int *)(a1 + 44);
        v21 = v14[3];
        result = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = result;
        if ( result + 1 > v20 )
          break;
        ++v6;
        *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v21;
        ++*(_DWORD *)(a1 + 40);
        if ( v6 == v5 )
          goto LABEL_18;
      }
      ++v6;
      v30 = v21;
      sub_2237220(v27, v28, result + 1, 8);
      result = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(result + 8LL * (unsigned int)(*(_DWORD *)(a1 + 40))++) = v30;
    }
    while ( v5 != v6 );
  }
LABEL_18:
  *(_DWORD *)(a1 + 224) = 382;
  return result;
}
