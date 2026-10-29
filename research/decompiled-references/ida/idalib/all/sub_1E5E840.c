__int64 __fastcall sub_1E5E840(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 result; // rax
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  int v16; // edx
  _DWORD *v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rsi
  unsigned int v20; // r9d
  unsigned int v21; // r8d
  unsigned __int8 v22; // dl
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rax
  bool v29; // zf
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-48h]
  unsigned int v34; // [rsp+0h] [rbp-48h]
  unsigned int v35; // [rsp+0h] [rbp-48h]
  unsigned int v36; // [rsp+Ch] [rbp-3Ch]
  unsigned int v37; // [rsp+Ch] [rbp-3Ch]
  void *v38; // [rsp+10h] [rbp-38h] BYREF
  int v39; // [rsp+18h] [rbp-30h]

  if ( (unsigned int)a4 == a1[3] )
    return a1[1] & 0xFFFFFFFFFFFFFFF0LL;
  v6 = a4 + 1;
  v7 = a1[2];
  switch ( *(_BYTE *)(v7 + (unsigned int)a4) )
  {
    case 0:
      v13 = sub_F63050(a3, a2, v7, a4);
      result = sub_1E5E840(a1, a2, v13, v6, v14);
      break;
    case 1:
      result = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 48), v6);
      break;
    case 2:
      v15 = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 32), v6);
      result = sub_A760B0((__int64)a2, v15);
      break;
    case 3:
      v16 = *(unsigned __int8 *)(a3 + 16);
      if ( (unsigned int)(v16 - 2) > 1 )
      {
        v29 = (_BYTE)v16 == 6;
        v30 = *(_QWORD *)(a3 + 32);
        if ( v29 )
        {
          v31 = sub_1E5E740((__int64)a1, (__int64)a2, v30, v6);
          result = sub_A71A40(
                     a2,
                     v31,
                     *(_QWORD *)(a3 + 40),
                     (*(_WORD *)(a3 + 18) >> 6) & 7,
                     (*(_BYTE *)(a3 + 18) >> 3) & 7);
        }
        else
        {
          v32 = sub_1E5E740((__int64)a1, (__int64)a2, v30, v6);
          result = sub_A71E50((__int64)a2, v32, (*(_WORD *)(a3 + 18) >> 6) & 7, (*(_BYTE *)(a3 + 18) >> 3) & 7);
        }
      }
      else
      {
        v17 = nullptr;
        v18 = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 32), v6);
        v19 = *(_QWORD *)(a3 + 40);
        v20 = (*(_BYTE *)(a3 + 18) >> 3) & 7;
        v21 = (*(_WORD *)(a3 + 18) >> 6) & 7;
        if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
          v17 = *(_DWORD **)(v19 + 16);
        v22 = *(_BYTE *)(a3 + 19);
        if ( (v22 & 2) != 0 )
        {
          v39 = *(_DWORD *)(v19 + 8);
          if ( (unsigned int)v39 > 0x40 )
          {
            v36 = v21;
            v34 = v20;
            sub_2205510(&v38);
            v20 = v34;
            v21 = v36;
          }
          else
          {
            v38 = *(void **)v19;
          }
        }
        else
        {
          v39 = 8 * ((v22 >> 2) & 0x1F);
          if ( v39 > 64 )
          {
            v37 = v21;
            v35 = v20;
            sub_2205470(&v38, v19, 0);
            v21 = v37;
            v20 = v35;
          }
          else
          {
            v38 = (void *)v19;
          }
        }
        result = sub_A70F70((__int64)a2, v18, (__int64)&v38, v17, v21, v20);
        if ( (unsigned int)v39 > 0x40 )
        {
          if ( v38 )
          {
            v33 = result;
            operator delete[](v38);
            result = v33;
          }
        }
      }
      break;
    case 4:
      v23 = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 32), v6);
      result = sub_A70010((__int64)a2, v23);
      break;
    case 5:
      v24 = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 32), v6);
      result = sub_A74B00((__int64)a2, v24);
      break;
    case 6:
      v25 = a3;
      while ( 1 )
      {
        v26 = *(_QWORD *)(v25 + 32);
        if ( (*(_BYTE *)(v25 + 18) & 0x10) == 0 )
          break;
        v25 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF0LL);
        v27 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 43;
        if ( (unsigned int)v27 > 1 )
          v25 = sub_F63050(v25, a2, v27, a4);
      }
      v28 = sub_1E5E740((__int64)a1, (__int64)a2, v26, v6);
      if ( *(_BYTE *)(a3 + 16) == 43 )
        result = sub_A73030((__int64)a2, v28, (*(_WORD *)(a3 + 18) & 8) != 0);
      else
        result = sub_A72DD0((__int64)a2, v28);
      break;
    case 7:
      v9 = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 32), v6);
      v10 = sub_F61C10(a3);
      result = sub_ABBA20(a2, v9, *(_QWORD *)(a3 + 40), (__int64)v10, v11, v12);
      break;
    case 8:
      result = sub_1E5E740((__int64)a1, (__int64)a2, *(_QWORD *)(a3 + 24), v6);
      break;
  }
  return result;
}
