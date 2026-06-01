__int64 __fastcall sub_3BAB10(_QWORD *a1, _BYTE *a2, __int64 a3, __int64 a4, char a5, __int64 a6)
{
  _BYTE *v6; // r14
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  int v13; // r12d
  char v14; // dl
  __int64 v15; // rax
  _BYTE *v16; // rax
  int v17; // edx
  char v18; // cl
  unsigned __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rsi
  char v24; // cl
  unsigned int v25; // [rsp+Ch] [rbp-6Ch]
  _BYTE *v26; // [rsp+10h] [rbp-68h]
  __int64 v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v7 = a5 & 2;
  v29[1] = __readfsqword(0x28u);
  if ( (_DWORD)v7 )
    sub_395C70((int)"HIDECANCEL\nReading bytes", a2, a3, a4, v7);
  if ( a3 > (unsigned int)~(_DWORD)a4 )
    return -1;
  result = 0;
  if ( a3 > 0 )
  {
    v10 = a3;
    v25 = a4;
    v11 = 0;
    v26 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v12 = a1[2];
        v13 = *(_DWORD *)(v12 + 20);
        if ( *(_DWORD *)(v12 + 16) != v13 )
        {
          v14 = sub_4F8910(a1, v25);
          v15 = a1[2];
          if ( v14 == 2 )
            v13 = *(_DWORD *)(v15 + 16);
          else
            v13 = *(_DWORD *)(v15 + 20);
        }
        if ( (sub_3B9AA0((__int64)a1, v25, 1) & 0x100) == 0 )
          break;
        sub_3BA160(a1, v29, v25);
        v21 = v29[0];
        if ( v13 > 0 )
        {
          v22 = 0;
          do
          {
            if ( a6 )
            {
              v23 = v11;
              v24 = v11++;
              *(_BYTE *)(a6 + (v23 >> 3)) |= 1 << (v24 & 7);
            }
            *v6++ = v21;
            v22 += 8;
            v21 >>= 8;
            --v10;
          }
          while ( v10 && v22 < v13 );
          goto LABEL_17;
        }
LABEL_28:
        ++v25;
      }
      if ( (a5 & 1) == 0 )
        return a3 - (_QWORD)&v26[v10];
      if ( v13 <= 0 )
        goto LABEL_28;
      v16 = v6;
      v17 = 0;
      do
      {
        if ( a6 )
        {
          v18 = v11;
          v19 = v11++;
          *(_BYTE *)(a6 + (v19 >> 3)) &= ~(1 << (v18 & 7));
        }
        ++v16;
        v17 += 8;
        *(v16 - 1) = -1;
        --v10;
      }
      while ( v10 && v17 < v13 );
      v20 = v26 - v6;
      v6 = v16;
      v26 = &v16[v20];
LABEL_17:
      ++v25;
      if ( !v10 )
        return a3 - (_QWORD)&v26[v10];
    }
  }
  return result;
}

