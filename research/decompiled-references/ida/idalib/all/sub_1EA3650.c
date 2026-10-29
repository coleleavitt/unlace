__int64 __fastcall sub_1EA3650(__int64 *a1, unsigned int a2, __int64 a3, double a4)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  char v6; // bl
  char v7; // cl
  _DWORD *v8; // r15
  unsigned int v9; // ebp
  void *v13; // rdi
  __int64 v14; // rsi
  unsigned int v15; // edx
  __int64 v16; // r13
  unsigned __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 *v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v29; // rbp
  unsigned int v30; // esi
  unsigned int v31; // edx
  __int64 *v32; // rax
  __int64 v33; // r10
  __int64 v34; // rdx
  __int64 v35; // rbp
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // r15
  __int64 v44; // rbp
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rdx
  __int64 v49; // r15
  void *v50; // rdi
  int v51; // r11d
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  bool v55; // zf
  int v56; // eax
  int v57; // eax
  int v58; // ecx
  __int64 *v59; // rdx
  unsigned int i; // r15d
  __int64 v61; // rsi
  int v62; // ecx
  int v63; // ecx
  int v64; // esi
  unsigned int j; // eax
  __int64 v66; // rdi
  unsigned int v67; // eax
  unsigned int v68; // r15d
  __int64 v69; // [rsp+8h] [rbp-F0h]
  __int64 v70; // [rsp+14h] [rbp-E4h]
  int v71; // [rsp+1Ch] [rbp-DCh]
  void *v72; // [rsp+20h] [rbp-D8h] BYREF
  unsigned int v73; // [rsp+28h] [rbp-D0h]
  char v74; // [rsp+2Ch] [rbp-CCh]
  _QWORD v75[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v76; // [rsp+40h] [rbp-B8h]
  __int64 v77; // [rsp+50h] [rbp-A8h]
  __int64 v78; // [rsp+58h] [rbp-A0h]
  unsigned __int8 v79; // [rsp+A8h] [rbp-50h]
  unsigned int v80; // [rsp+B0h] [rbp-48h]
  unsigned __int8 v81; // [rsp+B4h] [rbp-44h]

  if ( a2 > 0xB14 )
  {
    if ( a2 > 0xBD9 )
    {
      if ( a2 <= 0xC38 )
      {
        if ( a2 >= 0xC36 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else if ( a2 > 0xC19 )
        {
          if ( a2 > 0xC26 )
          {
            if ( a2 < 0xC29 )
              return 0;
            if ( a2 <= 0xC2B )
            {
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
            else
            {
              if ( a2 - 3118 > 5 )
                return 0;
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
          }
          else if ( a2 >= 0xC24 )
          {
            v4 = 4;
            v5 = 32;
            v6 = 1;
          }
          else
          {
            if ( a2 < 0xC1B )
              return 0;
            if ( a2 <= 0xC1C )
            {
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
            else
            {
              if ( a2 - 3103 > 2 )
                return 0;
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
          }
        }
        else if ( a2 >= 0xC16 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else if ( a2 > 0xC07 )
        {
          if ( a2 < 0xC09 )
            return 0;
          if ( a2 <= 0xC0A )
          {
            v4 = 4;
            v5 = 32;
            v6 = 1;
          }
          else
          {
            if ( a2 - 3085 > 1 )
              return 0;
            v4 = 4;
            v5 = 32;
            v6 = 1;
          }
        }
        else if ( a2 >= 0xC04 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else if ( a2 == 3040 )
        {
          v4 = 2;
          v5 = 16;
          v6 = 1;
        }
        else if ( a2 <= 0xBE0 )
        {
          if ( a2 == 3036 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else
          {
            if ( a2 != 3039 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 == 3043 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else
        {
          if ( a2 != 3046 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
      }
      else if ( a2 <= 0xC84 )
      {
        if ( a2 >= 0xC81 )
        {
          v4 = 5;
          v5 = 40;
          v6 = 0;
        }
        else if ( a2 <= 0xC4D )
        {
          if ( a2 >= 0xC45 )
          {
            v4 = 4;
            v5 = 32;
            v6 = 1;
          }
          else
          {
            if ( a2 < 0xC3B )
              return 0;
            if ( a2 <= 0xC3D )
            {
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
            else
            {
              if ( a2 - 3136 > 2 )
                return 0;
              v4 = 4;
              v5 = 32;
              v6 = 1;
            }
          }
        }
        else if ( a2 == 3195 )
        {
          v4 = 5;
          v5 = 40;
          v6 = 0;
        }
        else if ( a2 <= 0xC7B )
        {
          if ( a2 - 3155 > 1 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else
        {
          if ( a2 != 3198 )
            return 0;
          v4 = 5;
          v5 = 40;
          v6 = 0;
        }
      }
      else if ( a2 <= 0xE2C )
      {
        if ( a2 >= 0xE29 )
        {
          v4 = 1;
          v5 = 8;
          v6 = 1;
        }
        else
        {
          if ( a2 < 0xDAD )
            return 0;
          if ( a2 <= 0xDAE )
          {
            v4 = 2;
            v5 = 16;
            v6 = 1;
          }
          else
          {
            if ( a2 - 3506 > 1 )
              return 0;
            v4 = 2;
            v5 = 16;
            v6 = 1;
          }
        }
      }
      else if ( a2 <= 0xE2F )
      {
        v6 = 1;
        v4 = 2 - (a2 >= 0xE2E);
        v5 = a2 < 0xE2E ? 16LL : 8LL;
      }
      else if ( a2 > 0xE39 )
      {
        if ( a2 != 3642 )
          return 0;
        v4 = 2;
        v5 = 16;
        v6 = 1;
      }
      else
      {
        v4 = 1;
        v5 = 8;
        v6 = 0;
      }
    }
    else if ( a2 >= 0xBD0 )
    {
      v4 = 1;
      v5 = 8;
      v6 = 0;
    }
    else if ( a2 == 2958 )
    {
      v4 = 4;
      v5 = 32;
      v6 = 0;
    }
    else if ( a2 <= 0xB8E )
    {
      if ( a2 == 2929 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else if ( a2 <= 0xB71 )
      {
        if ( a2 == 2909 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else if ( a2 <= 0xB5D )
        {
          if ( a2 == 2888 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else if ( a2 > 0xB48 )
          {
            if ( a2 == 2897 )
            {
              v4 = 3;
              v5 = 24;
              v6 = 1;
            }
            else
            {
              if ( a2 != 2906 )
                return 0;
              v4 = 3;
              v5 = 24;
              v6 = 1;
            }
          }
          else if ( a2 == 2851 )
          {
            v4 = 4;
            v5 = 32;
            v6 = 1;
          }
          else
          {
            if ( a2 != 2872 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 == 2920 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else if ( a2 > 0xB68 )
        {
          if ( a2 == 2923 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else
          {
            if ( a2 != 2926 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 == 2912 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else
        {
          if ( a2 != 2916 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 2952 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else if ( a2 <= 0xB88 )
      {
        if ( a2 == 2938 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else if ( a2 <= 0xB7A )
        {
          if ( a2 == 2932 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else
          {
            if ( a2 != 2935 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 == 2941 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else
        {
          if ( a2 != 2949 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
      }
      else if ( a2 <= 0xB8B )
      {
        v6 = 1;
        v4 = a2 < 0xB8A ? 4 : 1;
        v5 = a2 < 0xB8A ? 32LL : 8LL;
      }
      else if ( a2 == 2956 )
      {
        v4 = 4;
        v5 = 32;
        v6 = 0;
      }
      else
      {
        v4 = 1;
        v5 = 8;
        v6 = 1;
      }
    }
    else if ( a2 == 2990 )
    {
      v4 = 3;
      v5 = 24;
      v6 = 0;
    }
    else if ( a2 > 0xBAE )
    {
      if ( a2 == 3008 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 <= 0xBC0 )
      {
        if ( a2 == 2999 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else if ( a2 <= 0xBB7 )
        {
          if ( a2 == 2993 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 0;
          }
          else
          {
            if ( a2 != 2996 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 0;
          }
        }
        else if ( a2 == 3002 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else
        {
          if ( a2 != 3005 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 3017 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 <= 0xBC9 )
      {
        if ( a2 == 3011 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else
        {
          if ( a2 != 3014 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 3020 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else
      {
        if ( a2 != 3023 )
          return 0;
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
    }
    else if ( a2 == 2972 )
    {
      v4 = 3;
      v5 = 24;
      v6 = 0;
    }
    else if ( a2 > 0xB9C )
    {
      if ( a2 == 2981 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 <= 0xBA5 )
      {
        if ( a2 == 2975 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else
        {
          if ( a2 != 2978 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 2984 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else
      {
        if ( a2 != 2987 )
          return 0;
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
    }
    else if ( a2 == 2961 )
    {
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else if ( a2 > 0xB91 )
    {
      if ( a2 > 0xB93 )
        return 0;
      v4 = 1;
      v5 = 8;
      v6 = 1;
    }
    else
    {
      if ( a2 == 2959 )
      {
        v4 = 1;
        v5 = 8;
      }
      else
      {
        v4 = 2;
        v5 = 16;
      }
      v6 = 1;
    }
  }
  else if ( a2 >= 0xB12 )
  {
    v4 = 3;
    v5 = 24;
    v6 = 0;
  }
  else if ( a2 <= 0x7B2 )
  {
    if ( a2 >= 0x7B0 )
    {
      v4 = 4;
      v5 = 32;
      v6 = 0;
    }
    else if ( a2 == 1779 )
    {
      v4 = 2;
      v5 = 16;
      v6 = 1;
    }
    else if ( a2 <= 0x6F3 )
    {
      if ( a2 == 1745 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else if ( a2 <= 0x6D1 )
      {
        if ( a2 == 1647 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
        else if ( a2 > 0x66F )
        {
          if ( a2 == 1655 )
          {
            v4 = 4;
            v5 = 32;
            v6 = 0;
          }
          else if ( a2 <= 0x677 )
          {
            if ( a2 - 1652 > 1 )
              return 0;
            v4 = 4;
            v5 = 32;
            v6 = 0;
          }
          else if ( a2 == 1720 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else
          {
            if ( a2 != 1742 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 > 0x60D )
        {
          if ( a2 != 1639 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
        else if ( a2 >= 0x60B )
        {
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else
        {
          if ( a2 < 0x608 )
            return 0;
          v4 = 2;
          v5 = 16;
          v6 = 1;
        }
      }
      else if ( a2 == 1762 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else if ( a2 > 0x6E2 )
      {
        if ( a2 == 1772 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else if ( a2 <= 0x6EC )
        {
          if ( a2 == 1765 )
          {
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
          else
          {
            if ( a2 != 1768 )
              return 0;
            v4 = 3;
            v5 = 24;
            v6 = 1;
          }
        }
        else if ( a2 == 1774 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else
        {
          if ( a2 != 1778 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
      }
      else if ( a2 == 1755 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else if ( a2 <= 0x6DB )
      {
        if ( a2 == 1749 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else
        {
          if ( a2 != 1752 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
      }
      else if ( a2 == 1758 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 1;
      }
      else
      {
        if ( a2 != 1759 )
          return 0;
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
    }
    else if ( a2 == 1812 )
    {
      v4 = 3;
      v5 = 24;
      v6 = 1;
    }
    else if ( a2 <= 0x714 )
    {
      if ( a2 == 1797 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 > 0x705 )
      {
        if ( a2 == 1806 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else if ( a2 > 0x70E )
        {
          if ( a2 - 1809 > 1 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 1;
        }
        else if ( a2 == 1800 )
        {
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
        else
        {
          if ( a2 != 1803 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 1788 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 <= 0x6FC )
      {
        if ( a2 == 1780 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
        else
        {
          if ( a2 != 1785 )
            return 0;
          v4 = 3;
          v5 = 24;
          v6 = 0;
        }
      }
      else if ( a2 == 1791 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else
      {
        if ( a2 != 1794 )
          return 0;
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
    }
    else if ( a2 > 0x766 )
    {
      if ( a2 == 1961 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else if ( a2 <= 0x7A9 )
      {
        if ( a2 - 1899 > 5 )
          return 0;
        v4 = 5;
        v5 = 40;
        v6 = 0;
      }
      else if ( a2 == 1964 )
      {
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
      else
      {
        if ( a2 != 1967 )
          return 0;
        v4 = 3;
        v5 = 24;
        v6 = 0;
      }
    }
    else if ( a2 >= 0x765 )
    {
      v4 = 5;
      v5 = 40;
      v6 = 0;
    }
    else if ( a2 > 0x71F )
    {
      if ( a2 > 0x722 )
        return 0;
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else if ( a2 >= 0x71D )
    {
      v4 = 2;
      v5 = 16;
      v6 = 1;
    }
    else
    {
      if ( a2 != 1813 )
        return 0;
      v4 = 2;
      v5 = 16;
      v6 = 1;
    }
  }
  else if ( a2 > 0x9F8 )
  {
    if ( a2 == 2652 )
    {
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else if ( a2 <= 0xA5C )
    {
      if ( a2 == 2614 )
      {
        v4 = 4;
        v5 = 32;
        v6 = 0;
      }
      else if ( a2 > 0xA36 )
      {
        if ( a2 > 0xA3F )
        {
          if ( a2 != 2649 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 1;
        }
        else if ( a2 >= 0xA3D )
        {
          v4 = 5;
          v5 = 40;
          v6 = 0;
        }
        else if ( a2 == 2617 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
        else
        {
          if ( a2 != 2620 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
      }
      else if ( a2 == 2608 )
      {
        v4 = 4;
        v5 = 32;
        v6 = 0;
      }
      else if ( a2 <= 0xA30 )
      {
        if ( a2 == 2602 )
        {
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
        else
        {
          if ( a2 != 2605 )
            return 0;
          v4 = 4;
          v5 = 32;
          v6 = 0;
        }
      }
      else
      {
        if ( a2 > 0xA33 )
          return 0;
        v4 = 5;
        v5 = 40;
        v6 = 0;
      }
    }
    else if ( a2 > 0xABB )
    {
      if ( a2 > 0xADE )
      {
        if ( a2 > 0xAE1 )
          return 0;
        v4 = 4;
        v5 = 32;
        v6 = 1;
      }
      else if ( a2 >= 0xADC )
      {
        v4 = 2;
        v5 = 16;
        v6 = 1;
      }
      else
      {
        if ( a2 != 2749 )
          return 0;
        v4 = 4;
        v5 = 32;
        v6 = 1;
      }
    }
    else if ( a2 >= 0xABA )
    {
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else if ( a2 == 2738 )
    {
      v4 = 1;
      v5 = 8;
      v6 = 1;
    }
    else if ( a2 <= 0xAB2 )
    {
      if ( a2 - 2655 > 3 )
        return 0;
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else
    {
      v4 = 1;
      v5 = 8;
      v6 = 1;
      if ( a2 != 2741 && a2 != 2744 )
        return 0;
    }
  }
  else if ( a2 >= 0x9F6 )
  {
    v4 = 5;
    v5 = 40;
    v6 = 0;
  }
  else if ( a2 == 2136 )
  {
    v4 = 4;
    v5 = 32;
    v6 = 0;
  }
  else if ( a2 <= 0x858 )
  {
    if ( a2 <= 0x7BE )
    {
      if ( a2 >= 0x7BC )
      {
        v4 = 5;
        v5 = 40;
        v6 = 0;
      }
      else
      {
        switch ( a2 )
        {
          case 0x7B8u:
            v4 = 4;
            v5 = 32;
            v6 = 0;
            break;
          case 0x7BBu:
            v4 = 4;
            v5 = 32;
            v6 = 0;
            break;
          case 0x7B5u:
            v4 = 4;
            v5 = 32;
            v6 = 0;
            break;
          default:
            return 0;
        }
      }
    }
    else if ( a2 == 2131 )
    {
      v4 = 2;
      v5 = 16;
      v6 = 0;
    }
    else if ( a2 > 0x853 )
    {
      if ( a2 - 2133 > 1 )
        return 0;
      v4 = 4;
      v5 = 32;
      v6 = 0;
    }
    else
    {
      v4 = 2;
      v5 = 16;
      v6 = 0;
      if ( a2 != 2125 && a2 != 2128 )
        return 0;
    }
  }
  else if ( a2 == 2151 )
  {
    v4 = 4;
    v5 = 32;
    v6 = 0;
  }
  else if ( a2 > 0x867 )
  {
    if ( a2 > 0x886 )
    {
      if ( a2 != 2547 )
        return 0;
      v4 = 5;
      v5 = 40;
      v6 = 0;
    }
    else if ( a2 >= 0x884 )
    {
      v4 = 4;
      v5 = 32;
      v6 = 1;
    }
    else
    {
      if ( a2 < 0x881 )
        return 0;
      v4 = 2;
      v5 = 16;
      v6 = 1;
    }
  }
  else if ( a2 == 2146 )
  {
    v4 = 2;
    v5 = 16;
    v6 = 0;
  }
  else if ( a2 > 0x862 )
  {
    if ( a2 - 2148 > 1 )
      return 0;
    v4 = 4;
    v5 = 32;
    v6 = 0;
  }
  else
  {
    v4 = 2;
    v5 = 16;
    v6 = 0;
    if ( a2 != 2140 && a2 != 2143 )
      return 0;
  }
  v7 = *(_BYTE *)(a3 + 2);
  v73 = 1;
  v72 = nullptr;
  v74 = 0;
  v8 = *(_DWORD **)(v5 + a3 + 8 * (((v7 & 8) != 0) + 1LL) + 32);
  if ( ((*v8 >> 14) & 0xC) != 0 )
    return 0;
  v9 = sub_16D4840(*a1, a3, v4, (__int64)&v72);
  if ( !(_BYTE)v9 && !(unsigned __int8)sub_AC43F0((__int64)&v72, &byte_4) )
  {
    v14 = 8;
    if ( !(unsigned __int8)sub_AC43F0((__int64)&v72, byte_8) )
    {
      if ( v6 )
      {
        v13 = v72;
        if ( v73 <= 0x40 )
        {
          if ( (char *)v72 - 8 <= (_BYTE *)&dword_0 + 3 )
            return 0;
        }
        else if ( (unsigned __int64)(*(_QWORD *)v72 - 8LL) <= 3 )
        {
LABEL_276:
          operator delete[](v13);
          return v9;
        }
      }
      else
      {
        v14 = 12;
        if ( (unsigned __int8)sub_AC43F0((__int64)&v72, &byte_9[3]) )
          goto LABEL_274;
      }
      if ( (*(_BYTE *)(a3 + 3) & 1) != 0 )
      {
        v15 = *(_DWORD *)(a3 + 24);
      }
      else if ( *(char *)(a3 + 2) >= 0
             || (v15 = sub_EEB7E0(*(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32), v14, a4)) == 0 )
      {
        v15 = sub_EEB7E0(*(_QWORD *)(a3 + 32), v14, a4);
        if ( !v15 )
        {
          if ( *(_DWORD *)(a3 + 16) )
          {
            v17 = *(_QWORD *)(a3 + 8 * (((*(_BYTE *)(a3 + 2) & 8) != 0) + 1LL) + 32);
            if ( v17 )
              v15 = sub_EEB7E0(v17, v14, a4);
          }
        }
      }
      sub_168B9F0((__int64)v75, a1, v15, 0x1569u, 0);
      v16 = sub_EEC8C0((unsigned __int64)v8, (__int64)a1, a4);
      if ( v79 )
      {
        v18 = v77;
        if ( v77 )
        {
          v19 = *(unsigned int *)(v77 + 424);
          v20 = *(unsigned int *)(v77 + 428);
          v21 = v19 + 1;
        }
        else
        {
          v36 = v78;
          v37 = *(_DWORD *)(v78 + 14976);
          if ( v37 )
          {
            v41 = (unsigned int)(v37 - 1);
            *(_DWORD *)(v78 + 14976) = v41;
            v18 = *(_QWORD *)(v36 + 8 * v41 + 14848);
            v42 = *(unsigned int *)(v18 + 536);
            *(_BYTE *)v18 = 0;
            v43 = *(_QWORD *)(v18 + 528);
            *(_DWORD *)(v18 + 424) = 0;
            v44 = v43 + (v42 << 6);
            while ( v43 != v44 )
            {
              while ( 1 )
              {
                v44 -= 64;
                v45 = *(void **)(v44 + 24);
                if ( v45 == (void *)(v44 + 40) )
                  break;
                operator delete(v45);
                if ( v43 == v44 )
                  goto LABEL_408;
              }
            }
LABEL_408:
            v19 = *(unsigned int *)(v18 + 424);
            v20 = *(unsigned int *)(v18 + 428);
            *(_DWORD *)(v18 + 536) = 0;
            v21 = v19 + 1;
          }
          else
          {
            v38 = operator new(0x3A0u);
            v20 = 8;
            v21 = 1;
            v18 = v38;
            *(_BYTE *)v38 = 0;
            *(_QWORD *)(v38 + 96) = v38 + 112;
            *(_QWORD *)(v38 + 128) = v38 + 144;
            *(_QWORD *)(v38 + 160) = v38 + 176;
            *(_QWORD *)(v38 + 192) = v38 + 208;
            *(_QWORD *)(v38 + 224) = v38 + 240;
            *(_QWORD *)(v38 + 256) = v38 + 272;
            *(_QWORD *)(v38 + 288) = v38 + 304;
            *(_QWORD *)(v38 + 320) = v38 + 336;
            *(_QWORD *)(v38 + 352) = v38 + 368;
            *(_QWORD *)(v38 + 384) = v38 + 400;
            *(_QWORD *)(v38 + 416) = v38 + 432;
            *(_QWORD *)(v38 + 104) = 0;
            *(_BYTE *)(v38 + 112) = 0;
            *(_QWORD *)(v38 + 136) = 0;
            *(_BYTE *)(v38 + 144) = 0;
            *(_QWORD *)(v38 + 168) = 0;
            *(_BYTE *)(v38 + 176) = 0;
            *(_QWORD *)(v38 + 200) = 0;
            *(_BYTE *)(v38 + 208) = 0;
            *(_QWORD *)(v38 + 232) = 0;
            *(_BYTE *)(v38 + 240) = 0;
            *(_QWORD *)(v38 + 264) = 0;
            *(_BYTE *)(v38 + 272) = 0;
            *(_QWORD *)(v38 + 296) = 0;
            *(_BYTE *)(v38 + 304) = 0;
            *(_QWORD *)(v38 + 328) = 0;
            *(_BYTE *)(v38 + 336) = 0;
            *(_QWORD *)(v38 + 360) = 0;
            *(_BYTE *)(v38 + 368) = 0;
            *(_QWORD *)(v38 + 392) = 0;
            *(_BYTE *)(v38 + 400) = 0;
            *(_QWORD *)(v38 + 424) = 0x800000000LL;
            *(_QWORD *)(v38 + 528) = v38 + 544;
            *(_QWORD *)(v38 + 536) = 0x600000000LL;
            v19 = 0;
          }
          v77 = v18;
        }
        v70 = v16;
        LOBYTE(v71) = 1;
        if ( v21 <= v20 )
          goto LABEL_383;
LABEL_394:
        sub_2237220(v18 + 416, v18 + 432, v21, 12);
        v19 = *(unsigned int *)(v18 + 424);
LABEL_383:
        v22 = *(_QWORD *)(v18 + 416) + 12 * v19;
        *(_QWORD *)v22 = v70;
        *(_DWORD *)(v22 + 8) = v71;
        v9 = v79;
        ++*(_DWORD *)(v18 + 424);
        goto LABEL_331;
      }
      v9 = v81;
      if ( !v81 )
      {
LABEL_331:
        sub_15F7200(v75);
        goto LABEL_274;
      }
      v23 = sub_168B9E0(v75);
      v28 = v76;
      v29 = v23;
      if ( v76 )
        v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 32LL))(v76);
      v30 = *(_DWORD *)(v29 + 16);
      if ( !v30 )
        goto LABEL_425;
      v31 = (v30 - 1) & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
      v32 = (__int64 *)(*(_QWORD *)v29 + 32LL * v31);
      v33 = *v32;
      if ( v28 == *v32 )
      {
LABEL_391:
        v34 = v32[1];
        goto LABEL_392;
      }
      v51 = 1;
      v26 = nullptr;
      if ( v33 == -4096 )
        goto LABEL_415;
      while ( 1 )
      {
        if ( v33 == -8192 && !v26 )
          v26 = v32;
        v27 = (unsigned int)(v51 + 1);
        v31 = (v30 - 1) & (v51 + v31);
        v32 = (__int64 *)(*(_QWORD *)v29 + 32LL * v31);
        v33 = *v32;
        if ( v28 == *v32 )
          goto LABEL_391;
        if ( v33 == -4096 )
          break;
        ++v51;
      }
      if ( !v26 )
LABEL_415:
        v26 = v32;
      v24 = 3 * v30;
      v52 = *(_DWORD *)(v29 + 8) + 1;
      v25 = (unsigned int)(4 * v52);
      if ( (unsigned int)v25 < (unsigned int)v24 )
      {
        v53 = v30 - *(_DWORD *)(v29 + 12) - v52;
        v54 = v30 >> 3;
        if ( (unsigned int)v53 > (unsigned int)v54 )
        {
LABEL_418:
          v55 = *v26 == -4096;
          *(_DWORD *)(v29 + 8) = v52;
          if ( !v55 )
            --*(_DWORD *)(v29 + 12);
          *v26 = v28;
          v34 = 0;
          v26[1] = 0;
          v26[2] = 0;
          v26[3] = 0;
LABEL_392:
          v35 = v34 + 32LL * v80;
          v18 = *(_QWORD *)(v35 + 8);
          if ( !v18 )
          {
            v39 = *(_QWORD *)(v35 + 16);
            v40 = *(_DWORD *)(v39 + 14976);
            if ( v40 )
            {
              v46 = (unsigned int)(v40 - 1);
              *(_DWORD *)(v39 + 14976) = v46;
              v18 = *(_QWORD *)(v39 + 8 * v46 + 14848);
              v47 = *(unsigned int *)(v18 + 536);
              *(_BYTE *)v18 = 0;
              v48 = *(_QWORD *)(v18 + 528);
              *(_DWORD *)(v18 + 424) = 0;
              v49 = v48 + (v47 << 6);
              while ( v48 != v49 )
              {
                while ( 1 )
                {
                  v49 -= 64;
                  v50 = *(void **)(v49 + 24);
                  if ( v50 == (void *)(v49 + 40) )
                    break;
                  v69 = v48;
                  operator delete(v50);
                  v48 = v69;
                  if ( v69 == v49 )
                    goto LABEL_413;
                }
              }
LABEL_413:
              *(_DWORD *)(v18 + 536) = 0;
            }
            else
            {
              v18 = operator new(0x3A0u);
              *(_BYTE *)v18 = 0;
              *(_QWORD *)(v18 + 96) = v18 + 112;
              *(_QWORD *)(v18 + 128) = v18 + 144;
              *(_QWORD *)(v18 + 160) = v18 + 176;
              *(_QWORD *)(v18 + 192) = v18 + 208;
              *(_QWORD *)(v18 + 224) = v18 + 240;
              *(_QWORD *)(v18 + 256) = v18 + 272;
              *(_QWORD *)(v18 + 288) = v18 + 304;
              *(_QWORD *)(v18 + 320) = v18 + 336;
              *(_QWORD *)(v18 + 352) = v18 + 368;
              *(_QWORD *)(v18 + 384) = v18 + 400;
              *(_QWORD *)(v18 + 416) = v18 + 432;
              *(_BYTE *)(v18 + 112) = 0;
              *(_QWORD *)(v18 + 104) = 0;
              *(_QWORD *)(v18 + 136) = 0;
              *(_BYTE *)(v18 + 144) = 0;
              *(_QWORD *)(v18 + 168) = 0;
              *(_BYTE *)(v18 + 176) = 0;
              *(_QWORD *)(v18 + 200) = 0;
              *(_BYTE *)(v18 + 208) = 0;
              *(_QWORD *)(v18 + 232) = 0;
              *(_BYTE *)(v18 + 240) = 0;
              *(_QWORD *)(v18 + 264) = 0;
              *(_BYTE *)(v18 + 272) = 0;
              *(_QWORD *)(v18 + 296) = 0;
              *(_BYTE *)(v18 + 304) = 0;
              *(_QWORD *)(v18 + 328) = 0;
              *(_BYTE *)(v18 + 336) = 0;
              *(_QWORD *)(v18 + 360) = 0;
              *(_BYTE *)(v18 + 368) = 0;
              *(_QWORD *)(v18 + 392) = 0;
              *(_BYTE *)(v18 + 400) = 0;
              *(_QWORD *)(v18 + 424) = 0x800000000LL;
              *(_QWORD *)(v18 + 528) = v18 + 544;
              *(_QWORD *)(v18 + 536) = 0x600000000LL;
            }
            *(_QWORD *)(v35 + 8) = v18;
          }
          v19 = *(unsigned int *)(v18 + 424);
          v70 = v16;
          v21 = v19 + 1;
          LOBYTE(v71) = 1;
          if ( v19 + 1 <= (unsigned __int64)*(unsigned int *)(v18 + 428) )
            goto LABEL_383;
          goto LABEL_394;
        }
        sub_1587800(v29, v30, v53, v54, (__int64)v26, v27);
        v56 = *(_DWORD *)(v29 + 16);
        if ( v56 )
        {
          v57 = v56 - 1;
          v58 = 1;
          v59 = nullptr;
          for ( i = v57 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4)); ; i = v57 & v68 )
          {
            v26 = (__int64 *)(*(_QWORD *)v29 + 32LL * i);
            v61 = *v26;
            if ( v28 == *v26 )
              break;
            if ( v61 == -4096 )
              goto LABEL_429;
            if ( v59 || v61 != -8192 )
              v26 = v59;
            v68 = v58 + i;
            v59 = v26;
            ++v58;
          }
LABEL_424:
          v52 = *(_DWORD *)(v29 + 8) + 1;
          goto LABEL_418;
        }
      }
      else
      {
LABEL_425:
        sub_1587800(v29, 2 * v30, v24, v25, (__int64)v26, v27);
        v62 = *(_DWORD *)(v29 + 16);
        if ( v62 )
        {
          v63 = v62 - 1;
          v64 = 1;
          v59 = nullptr;
          for ( j = v63 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4)); ; j = v63 & v67 )
          {
            v26 = (__int64 *)(*(_QWORD *)v29 + 32LL * j);
            v66 = *v26;
            if ( v28 == *v26 )
              break;
            if ( v66 == -4096 )
            {
LABEL_429:
              v52 = *(_DWORD *)(v29 + 8) + 1;
              if ( v59 )
                v26 = v59;
              goto LABEL_418;
            }
            if ( v59 || v66 != -8192 )
              v26 = v59;
            v67 = v64 + j;
            v59 = v26;
            ++v64;
          }
          goto LABEL_424;
        }
      }
      ++*(_DWORD *)(v29 + 8);
      BUG();
    }
  }
LABEL_274:
  if ( v73 > 0x40 )
  {
    v13 = v72;
    if ( v72 )
      goto LABEL_276;
  }
  return v9;
}
