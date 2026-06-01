void __fastcall sub_2EE7F0(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  if ( *a2 )
  {
    v2 = *(_QWORD **)(a1 + 640);
    if ( v2 && (v3 = *((unsigned int *)v2 - 1), (_DWORD)v3) )
    {
      v4 = &v2[v3];
      while ( *a2 != *v2 )
      {
        if ( ++v2 == v4 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      sub_2EE6F0(a1, a2);
    }
  }
}

