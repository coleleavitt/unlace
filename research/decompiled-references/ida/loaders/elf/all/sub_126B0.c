const char *__fastcall sub_126B0(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // eax
  const char *v5; // rdi
  unsigned int v6; // r8d

  v3 = *a2;
  v4 = *a2 & 0xFF0000;
  if ( v4 == 8585216 )
  {
LABEL_18:
    *a2 = v3 & 0xFF00FFFF;
    return "h8300";
  }
  if ( v4 > 0x830000 )
  {
    if ( v4 != 8716288 )
    {
      v5 = "h8sxn";
      v6 = v3 & 0xFF00FFFF;
      if ( v4 == 8781824 )
        goto LABEL_12;
      v5 = "h8s300";
      if ( v4 == 8650752 )
        goto LABEL_12;
      goto LABEL_16;
    }
    *a2 = v3 & 0xFF00FFFF;
    return "h8sx";
  }
  else if ( v4 == 8454144 )
  {
    *a2 = v3 & 0xFF00FFFF;
    return "h8300a";
  }
  else
  {
    if ( v4 <= 0x810000 )
    {
      if ( !v4 )
      {
        if ( *(_WORD *)(*(_QWORD *)(a1 + 16) + 522LL) == 48 )
        {
          if ( (unsigned __int8)v3 == 66 )
          {
            v5 = "h8sxa";
            goto LABEL_11;
          }
          if ( (unsigned __int8)v3 > 0x42u )
          {
            v5 = "h8sxx";
            if ( (unsigned __int8)v3 == 136 )
              goto LABEL_11;
          }
          else
          {
            if ( (unsigned __int8)v3 == 16 )
            {
              v5 = "h8sxn";
              goto LABEL_11;
            }
            v5 = "h8sxm";
            if ( (unsigned __int8)v3 == 34 )
            {
LABEL_11:
              LOBYTE(v3) = 0;
              v6 = v3;
LABEL_12:
              *a2 = v6;
              return v5;
            }
          }
        }
        goto LABEL_16;
      }
      if ( v4 == 0x800000 )
        goto LABEL_18;
LABEL_16:
      *a2 = v3 & 0xFF00FFFF;
      return (const char *)a3;
    }
    if ( v4 != 8519680 )
      goto LABEL_16;
    *a2 = v3 & 0xFF00FFFF;
    return "h8s300a";
  }
}

