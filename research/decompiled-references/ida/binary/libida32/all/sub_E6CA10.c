void __fastcall sub_E6CA10(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  _BYTE *v3; // r9
  int v4; // eax

  v2 = *a2;
  *(_QWORD *)(a1 + 8) = 0;
  v3 = (_BYTE *)a2[1];
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)a1 = v2;
  if ( v3 )
  {
    v4 = *((_DWORD *)a2 + 4);
    if ( *((_DWORD *)a2 + 5) )
    {
      sub_E6B7E0(v3, &v3[v4], (void **)(a1 + 8), (_DWORD *)(a1 + 16), (unsigned int *)(a1 + 20));
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v3;
      *(_DWORD *)(a1 + 16) = v4;
    }
  }
}

