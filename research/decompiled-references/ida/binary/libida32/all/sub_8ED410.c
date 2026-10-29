unsigned __int64 __fastcall sub_8ED410(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 result; // rax
  int v4; // edx
  int v5; // rdx^4
  int v6; // edx
  int v7; // rdx^4
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  int v10; // edx
  int v11; // rdx^4
  int v12; // edx
  int v13; // rdx^4
  int v14; // edx
  int v15; // rdx^4
  unsigned int v16; // ebx
  int v17; // edx
  int v18; // rdx^4
  int v19; // ebx
  int v20; // edx
  int v21; // rdx^4
  int v22; // edx
  int v23; // rdx^4
  int v24; // edx
  int v25; // rdx^4
  unsigned int v26; // ebx
  int v27; // ebx
  int v28; // edx
  int v29; // rdx^4
  int v30; // edx
  int v31; // rdx^4
  int v32; // edx
  int v33; // rdx^4
  int v34; // edx
  int v35; // rdx^4
  unsigned int v36; // ebx
  unsigned int v37; // ebx
  int v38; // ebx
  int v39; // edx
  int v40; // rdx^4
  unsigned int v41; // ebx
  int v42; // edx
  int v43; // rdx^4
  int v44; // edx
  int v45; // rdx^4
  unsigned int v46; // ebx
  int v47; // ebx
  int v48; // edx
  int v49; // rdx^4
  unsigned int v50; // ebx
  unsigned int v51; // ebx
  bool v52; // sf
  unsigned int v53; // ebx
  int v54; // edx
  int v55; // rdx^4
  int v56; // edx
  int v57; // rdx^4
  int v58; // edx
  int v59; // rdx^4
  int v60; // edx
  int v61; // rdx^4
  int v62; // edx
  int v63; // rdx^4
  int v64; // edx
  int v65; // rdx^4
  int v66; // edx
  int v67; // rdx^4
  int v68; // edx
  int v69; // rdx^4
  int v70; // edx
  int v71; // rdx^4
  int v72; // edx
  int v73; // rdx^4
  int v74; // edx
  int v75; // rdx^4
  int v76[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v76[0] = a3;
  if ( a2 == 400 )
  {
    result = sub_8ED230(0x190u, v76);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      result = v76[0];
      *(_DWORD *)(a1 + 76) = v76[0];
    }
    return result;
  }
  if ( a2 <= 0x190 )
  {
    if ( a2 == 107 )
    {
      v37 = v76[0];
      if ( v76[0] )
      {
        if ( (unsigned __int64)sub_8ECF30(0x6Bu) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v64 || v76[0] > v65 )
          return -42;
        v37 = v76[0];
      }
      *(_DWORD *)(a1 + 28) = v37;
      return v37;
    }
    if ( a2 <= 0x6B )
    {
      if ( a2 == 102 )
      {
        v50 = v76[0];
        if ( v76[0] )
        {
          if ( (unsigned __int64)sub_8ECF30(0x66u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v72 || v76[0] > v73 )
            return -42;
          v50 = v76[0];
        }
        *(_DWORD *)(a1 + 12) = v50;
        return v50;
      }
      if ( a2 > 0x66 )
      {
        if ( a2 == 104 )
        {
          v47 = v76[0];
          if ( v76[0] )
          {
            if ( (unsigned __int64)sub_8ECF30(0x68u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v56 || v76[0] > v57 )
              return -42;
            v47 = v76[0];
          }
          *(_DWORD *)(a1 + 16) = v47;
          return v47;
        }
        if ( a2 < 0x68 )
        {
          v46 = v76[0];
          if ( v76[0] )
          {
            if ( (unsigned __int64)sub_8ECF30(0x67u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v70 || v76[0] > v71 )
              return -42;
            v46 = v76[0];
          }
          *(_DWORD *)(a1 + 8) = v46;
          return v46;
        }
        if ( a2 != 105 )
        {
          if ( (unsigned __int64)sub_8ECF30(0x6Au) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v14 && v76[0] <= v15 )
          {
            result = (unsigned int)v76[0];
            *(_DWORD *)(a1 + 24) = v76[0];
            return result;
          }
          return -42;
        }
        v26 = v76[0];
        if ( v76[0] )
        {
          if ( (unsigned __int64)sub_8ECF30(0x69u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v60 || v76[0] > v61 )
            return -42;
          v26 = v76[0];
        }
        *(_DWORD *)(a1 + 20) = v26;
        return v26;
      }
      if ( a2 == 100 )
      {
        result = sub_8ED230(0x64u, v76);
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          result = v76[0];
          v52 = v76[0] < 0;
          if ( v76[0] )
          {
            *(_DWORD *)(a1 + 44) = v76[0];
            if ( v52 )
              return 0;
          }
          else
          {
            *(_DWORD *)(a1 + 44) = 3;
            return 3;
          }
        }
        return result;
      }
      if ( a2 > 0x64 )
      {
        v51 = v76[0];
        if ( v76[0] )
        {
          if ( (unsigned __int64)sub_8ECF30(0x65u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v74 || v76[0] > v75 )
            return -42;
          v51 = v76[0];
        }
        *(_DWORD *)(a1 + 4) = v51;
        return v51;
      }
      if ( a2 != 10 )
        return -40;
      if ( (unsigned __int64)sub_8ECF30(0xAu) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v17 && v76[0] <= v18 )
      {
        result = (unsigned int)v76[0];
        *(_DWORD *)a1 = v76[0];
        return result;
      }
    }
    else
    {
      if ( a2 == 163 )
      {
        v36 = v76[0];
        if ( v76[0] )
        {
          if ( (unsigned __int64)sub_8ECF30(0xA3u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v68 || v76[0] > v69 )
            return -42;
          v36 = v76[0];
        }
        *(_DWORD *)(a1 + 104) = v36;
        return v36;
      }
      if ( a2 > 0xA3 )
      {
        if ( a2 == 200 )
        {
          result = v76[0] != 0;
          *(_DWORD *)(a1 + 32) = v76[0] != 0;
          return result;
        }
        if ( a2 > 0xC8 )
        {
          if ( a2 == 201 )
          {
            result = v76[0] != 0;
            *(_DWORD *)(a1 + 36) = v76[0] != 0;
            return result;
          }
          if ( a2 == 202 )
          {
            LOBYTE(result) = v76[0] != 0;
            *(_DWORD *)(a1 + 40) = v76[0] == 0;
            return (unsigned __int8)result;
          }
          return -40;
        }
        if ( a2 != 164 )
          return -40;
        v16 = v76[0];
        if ( v76[0] )
        {
          if ( (unsigned __int64)sub_8ECF30(0xA4u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v22 || v76[0] > v23 )
            return -42;
          v16 = v76[0];
        }
        *(_DWORD *)(a1 + 112) = v16;
        return v16;
      }
      if ( a2 == 160 )
      {
        if ( (unsigned __int64)sub_8ECF30(0xA0u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v54 && v76[0] <= v55 )
        {
          result = (unsigned int)v76[0];
          *(_DWORD *)(a1 + 96) = v76[0];
          return result;
        }
      }
      else
      {
        if ( a2 > 0xA0 )
        {
          if ( a2 == 161 )
          {
            v53 = v76[0];
            if ( v76[0] )
            {
              if ( (unsigned __int64)sub_8ECF30(0xA1u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v58 || v76[0] > v59 )
                return -42;
              v53 = v76[0];
            }
            *(_DWORD *)(a1 + 100) = v53;
            return v53;
          }
          v8 = v76[0];
          if ( v76[0] )
          {
            if ( (unsigned __int64)sub_8ECF30(0xA2u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v24 || v76[0] > v25 )
              return -42;
            v8 = v76[0];
          }
          *(_DWORD *)(a1 + 108) = v8;
          return v8;
        }
        if ( a2 != 130 )
          return -40;
        result = (unsigned int)v76[0];
        if ( !v76[0] )
          goto LABEL_53;
        v19 = 1340;
        if ( v76[0] >= 1340 )
          v19 = v76[0];
        v76[0] = v19;
        if ( (unsigned __int64)sub_8ECF30(0x82u) <= 0xFFFFFFFFFFFFFF88LL && v19 >= v20 )
        {
          result = (unsigned int)v76[0];
          if ( v19 <= v21 )
          {
LABEL_53:
            *(_QWORD *)(a1 + 56) = result;
            return result;
          }
        }
      }
    }
    return -42;
  }
  if ( a2 == 1007 )
  {
    if ( (unsigned __int64)sub_8ECF30(0x3EFu) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v44 && v76[0] <= v45 )
    {
      result = (unsigned int)v76[0];
      *(_DWORD *)(a1 + 128) = v76[0];
      return result;
    }
    return -42;
  }
  if ( a2 > 0x3EF )
  {
    if ( a2 == 1012 )
    {
      if ( (unsigned __int64)sub_8ECF30(0x3F4u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v30 && v76[0] <= v31 )
      {
        result = v76[0] != 0;
        *(_DWORD *)(a1 + 148) = v76[0] != 0;
        return result;
      }
    }
    else if ( a2 > 0x3F4 )
    {
      if ( a2 == 1014 )
      {
        if ( (unsigned __int64)sub_8ECF30(0x3F6u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v28 && v76[0] <= v29 )
        {
          result = v76[0];
          *(_DWORD *)(a1 + 180) = v76[0];
          return result;
        }
      }
      else if ( a2 < 0x3F6 )
      {
        if ( (unsigned __int64)sub_8ECF30(0x3F5u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v39 && v76[0] <= v40 )
        {
          result = (unsigned int)v76[0];
          *(_DWORD *)(a1 + 176) = v76[0];
          return result;
        }
      }
      else
      {
        if ( a2 == 1015 )
        {
          v38 = v76[0];
          if ( v76[0] )
          {
            if ( (unsigned __int64)sub_8ECF30(0x3F7u) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v66 || v76[0] > v67 )
              return -42;
            v38 = v76[0];
          }
          *(_QWORD *)(a1 + 200) = v38;
          return v38;
        }
        if ( a2 != 1016 )
          return -40;
        if ( (unsigned __int64)sub_8ECF30(0x3F8u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v12 && v76[0] <= v13 )
        {
          result = (unsigned int)v76[0];
          *(_DWORD *)(a1 + 208) = v76[0];
          return result;
        }
      }
    }
    else if ( a2 == 1009 )
    {
      if ( (unsigned __int64)sub_8ECF30(0x3F1u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v34 && v76[0] <= v35 )
      {
        result = v76[0];
        *(_DWORD *)(a1 + 136) = v76[0];
        return result;
      }
    }
    else if ( a2 < 0x3F1 )
    {
      if ( (unsigned __int64)sub_8ECF30(0x3F0u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v32 && v76[0] <= v33 )
      {
        result = (unsigned int)v76[0];
        *(_DWORD *)(a1 + 132) = v76[0];
        return result;
      }
    }
    else if ( a2 == 1010 )
    {
      if ( (unsigned __int64)sub_8ECF30(0x3F2u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v48 && v76[0] <= v49 )
      {
        result = (unsigned int)v76[0];
        *(_DWORD *)(a1 + 140) = v76[0];
        return result;
      }
    }
    else if ( (unsigned __int64)sub_8ECF30(0x3F3u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v6 && v76[0] <= v7 )
    {
      result = (unsigned int)v76[0];
      *(_DWORD *)(a1 + 144) = v76[0];
      return result;
    }
    return -42;
  }
  if ( a2 == 1001 )
  {
    v41 = v76[0];
    if ( (unsigned __int64)sub_8ECF30(0x3E9u) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v42 && v76[0] <= v43 )
    {
      *(_DWORD *)(a1 + 68) = v76[0];
      return v41;
    }
    return -42;
  }
  if ( a2 > 0x3E9 )
  {
    if ( a2 == 1004 )
    {
      v27 = v76[0];
      if ( v76[0] )
      {
        if ( (unsigned __int64)sub_8ECF30(0x3ECu) > 0xFFFFFFFFFFFFFF88LL || v76[0] < v62 || v76[0] > v63 )
          return -42;
        v27 = v76[0];
      }
      *(_DWORD *)(a1 + 64) = v27;
      return v27;
    }
    if ( a2 <= 0x3EC )
    {
      if ( a2 != 1002 )
        return -40;
      v9 = v76[0];
      if ( (unsigned __int64)sub_8ECF30(0x3EAu) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v10 && v76[0] <= v11 )
      {
        *(_DWORD *)(a1 + 72) = v76[0];
        return v9;
      }
    }
    else
    {
      if ( a2 == 1005 )
      {
        result = v76[0] != 0;
        *(_DWORD *)(a1 + 120) = v76[0] != 0;
        return result;
      }
      if ( (unsigned __int64)sub_8ECF30(0x3EEu) <= 0xFFFFFFFFFFFFFF88LL && v76[0] >= v4 && v76[0] <= v5 )
      {
        result = (unsigned int)v76[0];
        *(_DWORD *)(a1 + 124) = v76[0];
        return result;
      }
    }
    return -42;
  }
  if ( a2 == 402 )
  {
    result = sub_8ED230(0x192u, v76);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      result = v76[0];
      *(_DWORD *)(a1 + 88) = v76[0];
    }
  }
  else if ( a2 < 0x192 )
  {
    if ( v76[0] && v76[0] <= 0x7FFFF )
      v76[0] = 0x80000;
    result = sub_8ED230(0x191u, v76);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      result = v76[0];
      *(_QWORD *)(a1 + 80) = v76[0];
    }
  }
  else
  {
    if ( a2 != 500 )
    {
      if ( a2 == 1000 )
      {
        result = v76[0] != 0;
        *(_DWORD *)(a1 + 48) = v76[0] != 0;
        return result;
      }
      return -40;
    }
    result = sub_8ED230(0x192u, v76);
    if ( result <= 0xFFFFFFFFFFFFFF88LL )
    {
      result = v76[0];
      *(_DWORD *)(a1 + 92) = v76[0];
    }
  }
  return result;
}

