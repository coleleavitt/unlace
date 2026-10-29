/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_808B780
// Address: 0x0808B780

//----- (0808B780) --------------------------------------------------------
int __cdecl sub_808B780(int a1)
{
  pthread_mutex_t *v1; // edi
  int v2; // ecx
  int v3; // eax
  int v4; // ecx
  int v5; // eax
  int v6; // esi
  unsigned int v7; // ecx
  int v8; // ecx
  int *v9; // eax
  int v10; // eax
  int result; // eax
  int v12; // eax
  char *v13; // ecx
  char *v14; // eax
  char *v15; // ecx
  char *v16; // eax
  int v17; // [esp-10h] [ebp-64h]
  int v18; // [esp-Ch] [ebp-60h]
  int v19; // [esp-8h] [ebp-5Ch]
  unsigned __int8 v20[4]; // [esp+10h] [ebp-44h] BYREF
  __int128 v21; // [esp+14h] [ebp-40h]
  unsigned __int8 v22[4]; // [esp+24h] [ebp-30h] BYREF
  __int128 v23; // [esp+28h] [ebp-2Ch]
  unsigned int v24; // [esp+38h] [ebp-1Ch]

  v24 = __readgsdword(0x14u);
  v1 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v2 = *(_DWORD *)(a1 + 56);
  if ( !v2 || (v3 = *(_DWORD *)(v2 + 68), v3 <= 0) )
  {
    if ( !byte_811F8A1 )
    {
      if ( v24 == __readgsdword(0x14u) )
        sub_80CFF40(487, v17, v18, v19);
      sub_80D7AB0();
    }
    JUMPOUT(0x804E750);
  }
  *(_DWORD *)(v2 + 68) = v3 - 1;
  sub_80D1600(v1);
  v4 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 48) + 1 == v4 )
    goto LABEL_4;
  v12 = *(_DWORD *)(a1 + 12);
  v20[0] = 2;
  v21 = 0;
  if ( sub_808A290(v20, (unsigned __int8 *)(v12 + 20 * v4 - 20)) )
    goto LABEL_25;
  v13 = *(char **)(a1 + 48);
  if ( v20[0] != 10 || SDWORD1(v21) < (int)v13 )
    goto LABEL_20;
  if ( !sub_8089920(v20, 2) )
  {
LABEL_25:
    sub_8089430((int)v20);
    result = 0;
    goto LABEL_13;
  }
  v13 = *(char **)(a1 + 48);
LABEL_20:
  v14 = *(char **)(a1 + 16);
  if ( v13 != v14 )
  {
    v22[0] = 2;
    v23 = 0;
    sub_808AF40((void **)(a1 + 12), v13, v22);
    sub_8089430((int)v22);
    v14 = *(char **)(a1 + 16);
  }
  v15 = *(char **)(a1 + 12);
  if ( *(_DWORD *)(a1 + 20) < (unsigned int)(v14 + 1) )
  {
    v15 = (char *)sub_80CF920(a1 + 12, v15, (unsigned int)(v14 + 1), 0x14u);
    *(_DWORD *)(a1 + 12) = v15;
    v14 = *(char **)(a1 + 16);
  }
  v16 = &v15[20 * (_DWORD)v14];
  *v16 = 2;
  *(_OWORD *)(v16 + 4) = 0;
  ++*(_DWORD *)(a1 + 16);
  sub_808A290((unsigned __int8 *)v16, v20);
  sub_8089430((int)v20);
LABEL_4:
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 36);
    v7 = *(_DWORD *)(a1 + 16);
    do
    {
      if ( *(_DWORD *)(v6 + 4 * v5 - 4) < v7 )
        break;
      *(_DWORD *)(a1 + 40) = --v5;
    }
    while ( v5 );
  }
  v8 = *(_DWORD *)(a1 + 28);
  v9 = (int *)(*(_DWORD *)(a1 + 24) + 16 * (v8 + 0xFFFFFFF));
  *(_DWORD *)(a1 + 52) = v9[3];
  *(_DWORD *)(a1 + 48) = v9[2];
  *(_DWORD *)(a1 + 60) = v9[1];
  v10 = *v9;
  *(_DWORD *)(a1 + 56) = v10;
  if ( v8 )
    *(_DWORD *)(a1 + 28) = v8 - 1;
  if ( v10 )
    v10 += 16;
  *(_DWORD *)(a1 + 68) = v10;
  result = 1;
LABEL_13:
  if ( v24 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 808B9C7: control flows out of bounds to 804E750
// 808B9E3: variable 'v17' is possibly undefined
// 808B9E3: variable 'v18' is possibly undefined
// 808B9E3: variable 'v19' is possibly undefined
// 811E6F8: using guessed type int dword_811E6F8;
// 811F8A1: using guessed type char byte_811F8A1;
