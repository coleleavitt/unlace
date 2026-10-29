__int64 __fastcall sub_1F95E40(__int64 a1, __int64 a2, int *a3)
{
  int v6; // r15d
  int v7; // esi
  _QWORD *v8; // r13
  __int64 v9; // r14
  __int64 result; // rax
  __int64 *v11; // rbp
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // [rsp+8h] [rbp-40h]

  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), *a3, *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), a3[1], *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), a3[2], *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  if ( *(_BYTE *)(a2 + 16) == 26 && (*(_BYTE *)(a2 + 19) & 0x1E) != 0 )
  {
    v7 = a3[2 * *(unsigned __int16 *)(a2 + 22) + 4];
    v6 = a3[2 * *(unsigned __int16 *)(a2 + 22) + 5];
  }
  else
  {
    v6 = 0;
    v7 = 0;
  }
  v8 = *(_QWORD **)(*(_QWORD *)a1 + 8LL);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  sub_1F6F570(v8, v7, v9);
  sub_1F6F570(v8, v6, v9);
  result = sub_1F6F570(*(_QWORD **)(*(_QWORD *)a1 + 8LL), a3[3], *(_QWORD *)(*(_QWORD *)a1 + 16LL));
  if ( *(_BYTE *)(a2 + 16) != 25 )
  {
    result = *(unsigned __int16 *)(a2 + 22);
    if ( *(_WORD *)(a2 + 22) )
    {
      v11 = (__int64 *)(a3 + 4);
      v12 = (__int64)&a3[2 * (unsigned int)(result - 1) + 6];
      do
      {
        v14 = *(__int64 **)(*(_QWORD *)a1 + 16LL);
        result = sub_1F92240(*(_QWORD *)(*(_QWORD *)a1 + 8LL), *v11);
        v15 = *((unsigned int *)v14 + 2);
        if ( v15 + 1 <= (unsigned __int64)*((unsigned int *)v14 + 3) )
        {
          v13 = *v14;
        }
        else
        {
          v16 = result;
          sub_2237220(v14, v14 + 2, v15 + 1, 8);
          v15 = *((unsigned int *)v14 + 2);
          v13 = *v14;
          result = v16;
        }
        ++v11;
        *(_QWORD *)(v13 + 8 * v15) = result;
        ++*((_DWORD *)v14 + 2);
      }
      while ( (__int64 *)v12 != v11 );
    }
  }
  return result;
}
