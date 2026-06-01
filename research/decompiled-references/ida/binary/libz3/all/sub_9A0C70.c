__int64 __fastcall sub_9A0C70(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 result; // rax
  _DWORD *v6; // rax
  unsigned __int8 v7; // dl
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // eax

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_QWORD *)(v2 + 8656);
  if ( !v3 || (v4 = *a2, (unsigned int)v4 >= *(_DWORD *)(v3 - 4)) || (result = *(_QWORD *)(v3 + 8 * v4)) == 0 )
  {
    v6 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    v7 = *(_BYTE *)(*(_QWORD *)(a1 + 464) + 36LL);
    if ( !v6 || *v6 != *(_DWORD *)(a1 + 8) )
    {
      v8 = 1;
      v9 = v7 ^ 1u;
      return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
    }
    v10 = v6[1];
    if ( v10 == 6 || v10 == 9 )
    {
      v8 = 0;
      if ( v7 )
      {
        v9 = 0;
        v8 = 0;
        return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
      }
    }
    else
    {
      if ( v7 )
      {
        v9 = 0;
        v8 = 1;
        return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
      }
      if ( v10 > 13 )
      {
        v8 = 1;
        v9 = (unsigned int)(v10 - 15) > 2;
        return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
      }
      v9 = 0;
      v8 = 1;
      if ( v10 > 9 )
        return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
    }
    v9 = 1;
    return sub_B68280(*(_QWORD *)(a1 + 16), a2, v9, 0, v8, v2);
  }
  return result;
}

