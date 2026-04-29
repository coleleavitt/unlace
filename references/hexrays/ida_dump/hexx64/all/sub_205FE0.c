__int64 __fastcall sub_205FE0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  char v7; // dl
  _QWORD *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r12d
  unsigned int *v15; // r14
  int v16; // eax
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 *v20; // rbp
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v25; // rdx
  _QWORD *v26; // [rsp+10h] [rbp-88h]
  __int64 v27; // [rsp+20h] [rbp-78h] BYREF
  __int128 v28; // [rsp+28h] [rbp-70h]
  __int64 v29; // [rsp+38h] [rbp-60h]
  char v30; // [rsp+40h] [rbp-58h]
  unsigned __int64 v31; // [rsp+48h] [rbp-50h]
  char v32; // [rsp+50h] [rbp-48h]
  unsigned __int64 v33; // [rsp+58h] [rbp-40h]

  v5 = a2;
  v33 = __readfsqword(0x28u);
  v7 = *(_BYTE *)(a4 + 48);
  if ( (v7 & 2) != 0 )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a4 + 48) = v7 | 2;
    v11 = *(_QWORD **)(a1 + 72);
    v12 = *(_QWORD *)(a1 + 80);
    if ( a5 )
    {
      v25 = (_QWORD *)v12;
      v12 = (__int64)v11;
      v11 = v25;
    }
    v13 = *(_QWORD *)(a1 + 56);
    if ( (unsigned int)v5 >= *(_DWORD *)(v13 + 64) )
      sub_201380(v12, a3, v13, v11);
    v14 = sub_205280(a1, *(_QWORD *)(*(_QWORD *)(v13 + 528) + 8 * v5), v12, v11, a3, a4, a5);
    if ( v14 >= 0 )
    {
      v15 = *(unsigned int **)a4;
      if ( 4LL * *(_QWORD *)(a4 + 8) )
      {
        do
        {
          v17 = *(__int64 **)(a1 + 80);
          if ( !a5 )
            v17 = *(__int64 **)(a1 + 72);
          v18 = (int)*v15;
          v19 = *v17;
          v32 = 1;
          v28 = 0;
          v27 = 0;
          v20 = (unsigned __int64 *)(v19 + 24 * v18);
          v21 = *(_QWORD *)(a4 + 24);
          v30 = *(_BYTE *)(a4 + 32);
          v29 = v21;
          v31 = 0xFFFFFFFF00000001LL;
          v22 = sub_104DF0(v20, (__int64)&v27);
          v23 = v22;
          if ( v27 )
          {
            v26 = v22;
            *(_QWORD *)&v28 = 0;
            qfree(v27);
            v23 = v26;
          }
          if ( v23 )
          {
            v16 = sub_205FE0(a1, *v15, v20, v23, (unsigned __int8)a5 ^ 1u);
            if ( v16 < 0 )
              return (unsigned int)v16;
            v14 += v16;
          }
          else if ( !(unsigned __int8)sub_1EEA60(*(unsigned __int8 **)(a1 + 56)) )
          {
            if ( !under_debugger )
              sub_383060(50338);
            BUG();
          }
          ++v15;
        }
        while ( v15 != (unsigned int *)(*(_QWORD *)a4 + 4LL * *(_QWORD *)(a4 + 8)) );
      }
    }
  }
  return (unsigned int)v14;
}
