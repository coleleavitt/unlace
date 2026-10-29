__int64 __fastcall is_attached_custom_data_format(int a1, int a2)
{
  _QWORD *v2; // rcx
  _DWORD *v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rcx

  v2 = *(_QWORD **)(qword_2CA1698 + 1360);
  if ( !a1 || (LODWORD(v3) = 0, a1 > 0) && (unsigned __int64)a1 < v2[1] && *(_QWORD *)(*v2 + 40LL * a1) )
  {
    LODWORD(v3) = 0;
    if ( a2 > 0 && (unsigned __int64)a2 < v2[15] && *(_QWORD *)(v2[14] + 16LL * a2) && (a1 || v2[1]) )
    {
      v4 = *v2 + 40LL * a1;
      v3 = *(_DWORD **)(v4 + 16);
      v5 = &v3[*(_QWORD *)(v4 + 24)];
      if ( v3 == v5 )
      {
LABEL_16:
        LODWORD(v3) = 0;
      }
      else
      {
        while ( *v3 != a2 )
        {
          if ( v5 == ++v3 )
            goto LABEL_16;
        }
        LOBYTE(v3) = v5 != v3;
      }
    }
  }
  return (unsigned int)v3;
}

