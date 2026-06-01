/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F21C
// Address: 0x0004F21C

//----- (0004F21C) --------------------------------------------------------
int __fastcall sub_4F21C(int a1, char *s, char *a3, unsigned int a4, unsigned __int8 a5, bool *a6)
{
  unsigned int v6; // r7
  _BYTE *v8; // r0
  _DWORD *v9; // r6
  int v10; // r2
  int v11; // r3
  unsigned int v12; // r5
  size_t v13; // r6
  char *v14; // r5
  int result; // r0
  unsigned __int8 *v16; // r7
  unsigned __int8 v17; // r2
  bool v18; // r5
  size_t v19; // r0
  size_t v20; // r4
  unsigned int v21; // r2
  void *v22; // r0
  int v23; // [sp+4h] [bp-2Ch]
  int v24; // [sp+8h] [bp-28h]
  int v25; // [sp+8h] [bp-28h]
  unsigned int v26; // [sp+8h] [bp-28h]
  int v27; // [sp+Ch] [bp-24h]
  char *sa; // [sp+10h] [bp-20h]
  unsigned int v29; // [sp+14h] [bp-1Ch]
  char *v30; // [sp+18h] [bp-18h]
  int v31; // [sp+1Ch] [bp-14h]
  void *v32; // [sp+20h] [bp-10h] BYREF
  size_t v33; // [sp+24h] [bp-Ch]
  void *ptr; // [sp+28h] [bp-8h]

  v6 = a4;
  sa = a3;
  v8 = (_BYTE *)(a1 + 488);
  v31 = a4;
  v30 = s;
  if ( *v8 )
  {
    *v8 = 0;
    v9 = operator new(0x14u);
    sub_4F3A0(
      v9,
      *(unsigned int **)(a1 + 464),
      v10,
      v11,
      v23,
      v24,
      v27,
      (int)sa,
      (int)&_stack_chk_guard,
      (int)v30,
      v31,
      v32);
    *(_DWORD *)(a1 + 464) = v9;
    v6 = v31;
    s = v30;
  }
  if ( !s || v6 > 0x7F || !*s )
    return set_qerrno(38);
  v12 = *(_DWORD *)(a1 + 464);
  v25 = *(_DWORD *)(v12 + 12);
  ptr = nullptr;
  v33 = 0;
  v32 = nullptr;
  v13 = strlen(s);
  if ( v13 >= 0xFFFFFFF0 )
    sub_55F54();
  v29 = v12;
  if ( v13 >= 0xB )
  {
    v14 = (char *)operator new((v13 + 16) & 0xFFFFFFF0);
    ptr = v14;
    v32 = (void *)(((v13 + 16) & 0xFFFFFFF0) + 1);
    v33 = v13;
  }
  else
  {
    LOBYTE(v32) = 2 * v13;
    v14 = (char *)&v32 + 1;
    if ( !v13 )
      goto LABEL_13;
  }
  qmemcpy(v14, v30, v13);
LABEL_13:
  v14[v13] = 0;
  v16 = sub_4F700(v29, (int *)&v32);
  if ( (unsigned __int8)v32 << 31 )
    operator delete(ptr);
  v17 = a5;
  v18 = *(_DWORD *)(v29 + 12) != v25;
  if ( sa && *sa )
  {
    v19 = strlen(sa);
    if ( v19 )
    {
      v20 = v19;
      v21 = v19 + 1;
      if ( *((_DWORD *)v16 + 2) >= v19 + 1 )
      {
        v22 = *(void **)v16;
      }
      else
      {
        v26 = v19 + 1;
        v22 = qvector_reserve((int)v16, *(void **)v16, v21, 1u);
        v21 = v26;
        *(_DWORD *)v16 = v22;
      }
      *((_DWORD *)v16 + 1) = v21;
      memmove(v22, sa, v20);
      *(_BYTE *)(*(_DWORD *)v16 + v20) = 0;
    }
    else
    {
      *((_DWORD *)v16 + 1) = 0;
    }
    v17 = a5;
  }
  else
  {
    *((_DWORD *)v16 + 1) = 0;
  }
  v16[13] = v17;
  v16[12] = v31;
  result = 0;
  if ( a6 )
  {
    *a6 = v18;
    return 0;
  }
  return result;
}
// 4F258: variable 'v10' is possibly undefined
// 4F258: variable 'v11' is possibly undefined
// 4F258: variable 'v23' is possibly undefined
// 4F258: variable 'v24' is possibly undefined
// 4F258: variable 'v27' is possibly undefined
// 4F260: variable 'v31' is possibly undefined
// 4F262: variable 'v30' is possibly undefined
// 4F306: variable 'sa' is possibly undefined
