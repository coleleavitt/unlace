__int64 __fastcall ClpNetworkBasis::check(ClpNetworkBasis *this)
{
  __int64 v1; // r10
  int v2; // esi
  _DWORD *v3; // r8
  __int64 v4; // r9
  __int64 result; // rax
  int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r11
  int v9; // edx
  __int64 v10; // rax

  v1 = *((_QWORD *)this + 3);
  v2 = 1;
  v3 = *((_DWORD **)this + 8);
  v4 = *((_QWORD *)this + 12);
  *v3 = *(_DWORD *)(v1 + 4LL * *(int *)this);
  *(_DWORD *)(v4 + 4LL * *(int *)this) = -1;
LABEL_2:
  result = (unsigned int)(v2 - 1);
LABEL_3:
  v6 = &v3[v2 - 1];
  while ( 1 )
  {
    v7 = *v6;
    if ( (int)v7 >= 0 )
    {
      v8 = *((_QWORD *)this + 5);
      *(_DWORD *)(v4 + 4 * v7) = result;
      *v6 = *(_DWORD *)(v8 + 4 * v7);
      v9 = *(_DWORD *)(v1 + 4 * v7);
      if ( v9 < 0 )
        goto LABEL_3;
      v10 = v2++;
      v3[v10] = v9;
      goto LABEL_2;
    }
    --v6;
    v2 = result;
    if ( !(_DWORD)result )
      return result;
    result = (unsigned int)(result - 1);
  }
}

