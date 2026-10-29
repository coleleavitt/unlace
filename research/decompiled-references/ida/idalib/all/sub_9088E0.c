unsigned __int64 __fastcall sub_9088E0(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int8 *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        unsigned __int64 a9,
        __int64 *a10,
        _DWORD *a11,
        unsigned int a12)
{
  __int64 *v14; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rdx
  unsigned int v17; // ebp
  unsigned __int64 *v18; // r10
  __int64 *v19; // r15
  unsigned int v20; // eax
  unsigned __int64 v21; // r8
  signed int i; // edx
  __int64 v23; // rsi
  unsigned __int64 v24; // r8
  __int64 v25; // rdx
  unsigned __int64 v26; // rsi
  unsigned __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned int v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  unsigned __int64 *v32; // [rsp+8h] [rbp-80h]
  __int64 *v33; // [rsp+8h] [rbp-80h]
  unsigned int v34; // [rsp+8h] [rbp-80h]
  __int64 *v35; // [rsp+8h] [rbp-80h]
  __int64 *v36; // [rsp+10h] [rbp-78h]
  signed int v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  char v39; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v40; // [rsp+20h] [rbp-68h]
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 *v42; // [rsp+30h] [rbp-58h]
  unsigned __int64 *v43; // [rsp+30h] [rbp-58h]
  unsigned int v44; // [rsp+3Ch] [rbp-4Ch] BYREF
  unsigned int v45; // [rsp+44h] [rbp-44h] BYREF
  unsigned __int64 v46; // [rsp+48h] [rbp-40h]

  v44 = a5;
  v14 = a10;
  v46 = __readfsqword(0x28u);
  result = -66;
  v16 = -(int)a8 & 7;
  if ( v16 > a9 || a9 - v16 <= 0x1F07 )
    return result;
  if ( !a4 || !a2 )
    return 0;
  result = -72;
  if ( a4 <= (unsigned __int64)&stru_20000 )
  {
    v17 = a6;
    result = -44;
    if ( a6 <= 0xC )
    {
      result = -46;
      if ( v44 <= 0xFF )
      {
        v18 = a1;
        if ( !v44 )
          v44 = 255;
        if ( !a6 )
          v17 = 11;
        v41 = (__int64)a1 + a2;
        v39 = (a12 >> 2) & (a11 != nullptr);
        if ( v39 && *a11 == 2 )
          return sub_907810((__int64)v18, v18, v41, (__int64)a3, a4, a7, v14, a12);
        v19 = (__int64 *)(a8 + v16);
        if ( (a12 & 8) != 0 && a4 > 0x9FFF )
        {
          v45 = v44;
          v34 = sub_904CF0(v19, &v45, a3, 4096);
          v45 = v44;
          v29 = sub_904CF0(v19, &v45, &a3[a4 - 4096], 4096);
          v18 = a1;
          v14 = a10;
          if ( v34 + (unsigned __int64)v29 <= 0x44 )
            return 0;
        }
        v36 = v14;
        v32 = v18;
        v38 = (__int64)(v19 + 385);
        result = sub_904DF0(v19, &v44, (unsigned int *)a3, a4, v19 + 385, 0x1000u);
        v18 = v32;
        v14 = v36;
        if ( result <= 0xFFFFFFFFFFFFFF88LL )
        {
          if ( a4 == result )
          {
            *(_BYTE *)v32 = *a3;
            return 1;
          }
          if ( (a4 >> 7) + 4 >= result )
            return 0;
          if ( a11 )
          {
            if ( *a11 == 1 )
            {
              v30 = *((unsigned __int8 *)v36 + 1);
              v37 = v44;
              if ( v44 <= v30
                && (v43 = v32, v35 = v14, v31 = sub_905010((__int64)v14, (__int64)v19, v44), v14 = v35, v18 = v43, v31) )
              {
                if ( v39 )
                  return sub_907810((__int64)v18, v18, v41, (__int64)a3, a4, a7, v14, a12);
              }
              else
              {
                *a11 = 0;
              }
              goto LABEL_23;
            }
            if ( v39 && *a11 )
              return sub_907810((__int64)v18, v18, v41, (__int64)a3, a4, a7, v14, a12);
          }
          v37 = v44;
LABEL_23:
          v40 = v18;
          v42 = v14;
          v33 = v19 + 128;
          v20 = sub_908740(v17, a4, v37, v38, 0x1300u, v19 + 128, (unsigned int *)v19, a12);
          result = sub_907EA0(v19 + 128, (unsigned int *)v19, v44, v20, v38, 0x1300u);
          if ( result > 0xFFFFFFFFFFFFFF88LL )
            return result;
          result = sub_907880(v40, a2, (__int64)(v19 + 128), v44, result, v38, 0x2ECu);
          if ( result > 0xFFFFFFFFFFFFFF88LL )
            return result;
          v18 = v40;
          v14 = v42;
          if ( a11 )
          {
            if ( !*a11 )
            {
              if ( a4 <= result + 12 )
                return 0;
              goto LABEL_35;
            }
            if ( (v44 & 0x80000000) == 0 )
            {
              v21 = 0;
              for ( i = 0; i <= (int)v44; ++i )
              {
                v23 = i;
                v21 += *((unsigned int *)v19 + v23) * (unsigned __int64)LOBYTE(v42[v23 + 1]);
              }
              v24 = v21 >> 3;
              v25 = 0;
              v26 = 0;
              while ( 1 )
              {
                v26 += *((unsigned int *)v19 + v25) * (unsigned __int64)LOBYTE(v19[v25 + 129]);
                if ( v44 == v25 )
                  break;
                ++v25;
              }
              if ( (v26 >> 3) + result < v24 && result + 12 < a4 )
              {
LABEL_35:
                *a11 = 0;
                v27 = (unsigned __int64 *)((char *)v40 + result);
LABEL_36:
                if ( v42 )
                {
                  *v42 = v19[128];
                  v42[256] = v19[384];
                  qmemcpy(
                    (void *)((unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)((char *)v33 - ((char *)v42 - ((unsigned __int64)(v42 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v42 - (((_DWORD)v42 + 8) & 0xFFFFFFF8) + 2056) >> 3));
                }
                return sub_907810((__int64)v40, v27, v41, (__int64)a3, a4, a7, v33, a12);
              }
            }
            return sub_907810((__int64)v18, v18, v41, (__int64)a3, a4, a7, v14, a12);
          }
          v28 = result + 12;
          v27 = (unsigned __int64 *)((char *)v40 + result);
          if ( a4 > v28 )
            goto LABEL_36;
          return 0;
        }
      }
    }
  }
  return result;
}
