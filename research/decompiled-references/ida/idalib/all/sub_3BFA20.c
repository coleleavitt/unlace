__int64 __fastcall sub_3BFA20(__int64 *a1, _BYTE *a2, __int64 a3, unsigned __int64 a4, char a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  int v12; // r12d
  char v13; // dl
  __int64 v14; // rax
  _BYTE *v15; // rax
  int v16; // edx
  char v17; // cl
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v21; // rax
  int v22; // edx
  unsigned __int64 v23; // rsi
  char v24; // cl
  unsigned __int64 v25; // [rsp+8h] [rbp-70h]
  _BYTE *v26; // [rsp+10h] [rbp-68h]
  __int64 v29[9]; // [rsp+30h] [rbp-48h] BYREF

  v29[1] = __readfsqword(0x28u);
  if ( (a5 & 2) != 0 )
    sub_387AC0();
  v8 = 0x100000000LL;
  if ( *(_DWORD *)(a1[3] + 24) == 8 )
    v8 = -1;
  if ( v8 - a4 < a3 )
    return -1;
  v9 = a3;
  if ( a3 > 0 )
  {
    v25 = a4;
    v10 = 0;
    v26 = nullptr;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = a1[2];
        v12 = *(_DWORD *)(v11 + 20);
        if ( *(_DWORD *)(v11 + 16) != v12 )
        {
          v13 = sub_510230(a1, v25);
          v14 = a1[2];
          if ( v13 == 2 )
            v12 = *(_DWORD *)(v14 + 16);
          else
            v12 = *(_DWORD *)(v14 + 20);
        }
        if ( (sub_3BE900(a1, v25, 1) & 0x100) == 0 )
          break;
        sub_3BEFF0(a1, v29, v25);
        v21 = v29[0];
        if ( v12 > 0 )
        {
          v22 = 0;
          do
          {
            if ( a6 )
            {
              v23 = v10;
              v24 = v10++;
              *(_BYTE *)(a6 + (v23 >> 3)) |= 1 << (v24 & 7);
            }
            *a2++ = v21;
            v22 += 8;
            v21 >>= 8;
            --v9;
          }
          while ( v9 && v22 < v12 );
          goto LABEL_19;
        }
LABEL_29:
        ++v25;
      }
      if ( (a5 & 1) == 0 )
        return a3 - (_QWORD)&v26[v9];
      if ( v12 <= 0 )
        goto LABEL_29;
      v15 = a2;
      v16 = 0;
      do
      {
        if ( a6 )
        {
          v17 = v10;
          v18 = v10++;
          *(_BYTE *)(a6 + (v18 >> 3)) &= ~(1 << (v17 & 7));
        }
        ++v15;
        v16 += 8;
        *(v15 - 1) = -1;
        --v9;
      }
      while ( v9 && v16 < v12 );
      v19 = v26 - a2;
      a2 = v15;
      v26 = &v15[v19];
LABEL_19:
      ++v25;
      if ( !v9 )
        return a3 - (_QWORD)&v26[v9];
    }
  }
  return 0;
}
