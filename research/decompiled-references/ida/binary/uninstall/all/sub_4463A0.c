__int64 __fastcall sub_4463A0(
        __int64 a1,
        char *a2,
        int a3,
        char a4,
        __int64 a5,
        _BYTE *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10)
{
  __int64 v10; // rax
  unsigned __int64 v12; // r12
  _BYTE *v13; // rbp
  char *v14; // rbx
  __int64 v15; // rdi
  char *v16; // rax
  int v17; // r13d
  unsigned __int64 v18; // r15
  char v19; // al
  unsigned __int16 v20; // cx
  int v21; // esi
  __int64 v22; // rax
  int v23; // edx
  int v25; // eax
  unsigned int v26; // [rsp+Ch] [rbp-5Ch]
  __int64 v27; // [rsp+10h] [rbp-58h]
  int v28; // [rsp+18h] [rbp-50h]
  unsigned __int64 v29; // [rsp+20h] [rbp-48h]
  int v30; // [rsp+28h] [rbp-40h]
  unsigned __int16 v32[25]; // [rsp+36h] [rbp-32h] BYREF

  v10 = a1 + 4;
  v12 = (unsigned __int64)&a2[a3];
  v13 = a6;
  v14 = a2;
  v15 = *(_QWORD *)(a1 + 272);
  v27 = v10;
  v16 = (char *)(v12 - 3);
  v26 = 0;
  v30 = (int)a2;
  if ( (a4 & 2) != 0 )
    v16 = &a2[a3];
  v17 = 0;
  v29 = (unsigned __int64)v16;
  v28 = (int)a6;
  v18 = (unsigned __int64)&a6[a7 - 1];
  while ( (unsigned __int64)v14 < v12 )
  {
    if ( (unsigned __int64)v14 > v29 && !(unsigned int)sub_49BD40(v14, (unsigned int)(v12 - (_DWORD)v14)) )
    {
      v26 = -1;
      break;
    }
    v19 = *v14;
    if ( (unsigned __int8)*v14 > 0xBFu )
    {
      v25 = sub_49BBC0(v14, v32);
      v20 = v32[0];
      v21 = v25;
    }
    else
    {
      v20 = v19;
      v21 = 1;
      v32[0] = v19;
    }
    v22 = *(_QWORD *)(v15 + 8LL * HIBYTE(v20));
    v23 = *(unsigned __int16 *)(v22 + 2LL * (unsigned __int8)v20);
    if ( !*(_WORD *)(v22 + 2LL * (unsigned __int8)v20) && v20 )
    {
      if ( (a4 & 4) != 0 )
      {
        v26 = -3;
        break;
      }
      v23 = *(_DWORD *)a1;
    }
    if ( *(_BYTE *)((v23 >> 8) + v27) )
    {
      if ( (unsigned __int64)(v13 + 1) > v18 )
        goto LABEL_22;
      *v13 = BYTE1(v23);
      v13[1] = v23;
      v13 += 2;
    }
    else
    {
      if ( (unsigned __int64)v13 > v18 )
      {
LABEL_22:
        v26 = -4;
        break;
      }
      *v13++ = v23;
    }
    ++v17;
    v14 += v21;
  }
  *a8 = (_DWORD)v14 - v30;
  *a9 = (_DWORD)v13 - v28;
  *a10 = v17;
  return v26;
}

