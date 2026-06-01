unsigned __int64 __fastcall sub_13DCDE0(
        unsigned __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __m128i a5,
        double a6)
{
  int v6; // r12d
  unsigned __int64 v7; // rdi
  char v9; // bp
  char v12; // r15
  int v13; // eax
  __int64 v14; // rax
  int v15; // edx
  int v16; // ebx
  int v17; // r12d
  int v18; // edx
  unsigned int v19; // esi
  int v20; // eax
  __int64 v21; // rbx
  unsigned int v22; // esi
  int v23; // esi
  __int64 v24; // rax
  int v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // eax
  int v28; // edx
  int v29; // edx
  int v30; // edx
  unsigned int v31; // esi
  int v32; // eax
  __int64 v33; // rax
  char v35; // [rsp+23h] [rbp-55h] BYREF
  int v36; // [rsp+24h] [rbp-54h] BYREF
  int v37; // [rsp+28h] [rbp-50h] BYREF
  int v38; // [rsp+2Ch] [rbp-4Ch] BYREF
  int v39; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v40; // [rsp+34h] [rbp-44h]
  int v41; // [rsp+3Ch] [rbp-3Ch]

  v6 = a1;
  v7 = HIDWORD(a1);
  v36 = v6;
  v37 = v7;
  if ( !v6 || !(_DWORD)v7 )
    goto LABEL_3;
  v9 = a2;
  if ( v6 < 0 )
  {
    if ( (v7 & 0x80000000) == 0LL )
    {
      if ( (unsigned __int8)sub_13D1460(v6, a3, a4, &v36) )
      {
        v40 = sub_13DC9B0(v36, v7, a2, a3, a4, a5, a6);
        v41 = v30;
        return v40;
      }
      goto LABEL_3;
    }
    v38 = 0;
    v39 = 0;
    if ( (unsigned __int8)sub_13D1460(v6, a3, a4, &v38) )
    {
      if ( (_BYTE)a2 )
      {
        if ( (unsigned __int8)sub_13DBFA0(v37, (__int64 *)a3, a4, &v39, a5, a6) )
        {
          v16 = v38;
          v17 = v39;
          v31 = v37 & 0x7FFFFFFF;
          if ( (v37 & 0x7FFFFFFFu) < *(_DWORD *)(a3 + 476) || v31 >= *(_DWORD *)(a3 + 480) )
            v32 = sub_101D590(a3, v31);
          else
            v32 = *(_DWORD *)(a3 + 472);
          if ( (unsigned int)(v32 + 1) <= 1 )
          {
            v33 = *(_QWORD *)(a3 + 184);
          }
          else if ( v32 < 0 )
          {
            v33 = sub_101FA20(a3, (unsigned int)(-2 - v32), nullptr);
          }
          else
          {
            v33 = *(_QWORD *)(a3 + 184) + 24LL * (unsigned int)v32;
          }
          v9 = *(_BYTE *)(v33 + 20);
          goto LABEL_22;
        }
      }
      else if ( (unsigned __int8)sub_13D1460(v37, a3, a4, &v39) )
      {
        v16 = v38;
        v17 = v39;
LABEL_22:
        v40 = sub_13DC9B0(v16, v17, v9, a3, a4, a5, a6);
        v41 = v18;
        return v40;
      }
    }
    v35 = 0;
    v19 = v36 & 0x7FFFFFFF;
    if ( (v36 & 0x7FFFFFFFu) >= *(_DWORD *)(a3 + 476) && v19 < *(_DWORD *)(a3 + 480) )
      v20 = *(_DWORD *)(a3 + 472);
    else
      v20 = sub_101D590(a3, v19);
    if ( (unsigned int)(v20 + 1) > 1 )
    {
      v21 = v20 < 0 ? sub_101FA20(a3, (unsigned int)(-2 - v20), &v35) : *(_QWORD *)(a3 + 184) + 24LL * (unsigned int)v20;
      if ( !v35 && *(_DWORD *)(v21 + 12) && !*(_DWORD *)(v21 + 16) )
      {
        v22 = v37 & 0x7FFFFFFF;
        if ( (v37 & 0x7FFFFFFFu) < *(_DWORD *)(a3 + 476) || v22 >= *(_DWORD *)(a3 + 480) )
          v23 = sub_101D590(a3, v22);
        else
          v23 = *(_DWORD *)(a3 + 472);
        v24 = sub_101FA50(a3, v23, &v35);
        if ( !v35 )
        {
          v25 = *(_DWORD *)(v24 + 12);
          if ( v25 )
          {
            if ( !*(_DWORD *)(v24 + 16) && *(_DWORD *)(v21 + 12) == v25 )
            {
              v26 = sub_10205A0(a3, v36);
              v27 = sub_10205A0(a3, v37);
              v40 = sub_13DCDE0(__PAIR64__(v27, v26), a2, a3, a4);
              v41 = v28;
              return v40;
            }
          }
        }
      }
    }
    goto LABEL_3;
  }
  v12 = a2;
  if ( (v7 & 0x80000000) == 0LL )
  {
    v40 = sub_13DC9B0(v6, v7, a2, a3, a4, a5, a6);
    v41 = v29;
    return v40;
  }
  if ( (_BYTE)a2 )
  {
    if ( (unsigned __int8)sub_13DBFA0(v7, (__int64 *)a3, a4, &v37, a5, a6) )
    {
      if ( (v7 & 0x7FFFFFFF) < *(_DWORD *)(a3 + 476) || (v7 & 0x7FFFFFFF) >= *(_DWORD *)(a3 + 480) )
        v13 = sub_101D590(a3, v7 & 0x7FFFFFFF);
      else
        v13 = *(_DWORD *)(a3 + 472);
      if ( (unsigned int)(v13 + 1) <= 1 )
      {
        v14 = *(_QWORD *)(a3 + 184);
      }
      else if ( v13 < 0 )
      {
        v14 = sub_101FA20(a3, (unsigned int)(-2 - v13), nullptr);
      }
      else
      {
        v14 = *(_QWORD *)(a3 + 184) + 24LL * (unsigned int)v13;
      }
      v12 = *(_BYTE *)(v14 + 20);
      goto LABEL_16;
    }
  }
  else if ( (unsigned __int8)sub_13D1460(v7, a3, a4, &v37) )
  {
LABEL_16:
    v40 = sub_13DC9B0(v6, v37, v12, a3, a4, a5, a6);
    v41 = v15;
    return v40;
  }
LABEL_3:
  v40 = 0;
  LOBYTE(v41) = 0;
  return v40;
}
