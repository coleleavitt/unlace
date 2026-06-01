__int64 __fastcall sub_439090(_QWORD *a1, int *a2)
{
  int v2; // eax
  int v4; // edx
  bool v5; // zf
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // r14d
  int v12; // r13d
  int v13; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  int v17; // [rsp+0h] [rbp-58h]
  int v18; // [rsp+4h] [rbp-54h]
  _QWORD v19[9]; // [rsp+10h] [rbp-48h] BYREF

  v2 = *a2;
  v19[1] = __readfsqword(0x28u);
  v17 = 2;
  v4 = v2 & 0x802;
  if ( (v2 & 0x802) != 0 )
  {
    if ( v4 == 2 )
    {
      v17 = 4;
    }
    else
    {
      v5 = v4 == 2048;
      v6 = 8;
      if ( v5 )
        v6 = 1;
      v17 = v6;
    }
  }
  v7 = a2[3];
  v8 = a2[2];
  v18 = 0x7FFFFFFF;
  if ( v8 < v7 )
  {
    v9 = v7 - v8;
    v10 = v2 & 0x404;
    if ( v10 )
    {
      if ( v10 == 4 )
      {
        v9 >>= 2;
      }
      else if ( v10 != 1024 )
      {
        v9 >>= 3;
      }
    }
    else
    {
      v9 >>= 1;
    }
    v18 = v9;
  }
  if ( !*((_WORD *)a2 + 2) )
    return 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  while ( 1 )
  {
    v14 = v11 + v7;
    v19[0] = 0;
    v15 = v14;
    if ( (sub_3B9AA0((__int64)a1, v14, 4) & 0x600) == 0x200 )
      v15 = sub_3BD5D0((__int64)a1, v14);
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, v15, 4) >> 8) & 6) == 0
      || v17 != sub_3BAE00(a1, v19, v17, v14, 0, 0)
      || v19[0] >= (unsigned __int64)v18 )
    {
      break;
    }
    if ( (unsigned __int64)v13 < v19[0] )
      v13 = v19[0];
    ++v12;
    v11 += v17;
    if ( *((unsigned __int16 *)a2 + 2) <= v12 )
      break;
    v7 = a2[3];
  }
  if ( !v13 || !v12 )
    return 0;
  *((_WORD *)a2 + 2) = v12;
  a2[6] = v13 + 1;
  return 1;
}

