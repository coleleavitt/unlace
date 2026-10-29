__int64 __fastcall sub_284D40(__int64 a1, __int64 a2, __int64 a3, __int64 **a4)
{
  __int64 v5; // r13
  int v6; // eax
  int v7; // ebp
  int v8; // ebx
  __int64 *v9; // rax
  __int64 *v10; // r15
  const char *v11; // rsi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ebx
  __int64 v16; // rdi
  __int64 v17; // rbp
  __int16 v18; // ax
  unsigned int v21; // [rsp+1Ch] [rbp-10Ch]
  unsigned int v22; // [rsp+1Ch] [rbp-10Ch]
  _BYTE v23[64]; // [rsp+20h] [rbp-108h] BYREF
  _BYTE v24[16]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v25[96]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+D0h] [rbp-58h]
  unsigned __int64 v27; // [rsp+E8h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a3 + 40);
  sub_283F90((__int64)v23, a1);
  v6 = v26;
  v7 = (*(_QWORD *)(a1 + 416) == 0)
     + -252645135 * ((__int64)(*(_QWORD *)(a1 + 376) - *(_QWORD *)(a1 + 360)) >> 4)
     + ((__int64)(*(_QWORD *)(a1 + 416) - *(_QWORD *)(a1 + 384)) >> 3)
     - 252645135 * ((__int64)(*(_QWORD *)(a1 + 392) - *(_QWORD *)(a1 + 400)) >> 4)
     - 1
     - *(_DWORD *)(a1 + 424);
  if ( (int)v26 < 0 )
    v6 = 0;
  if ( v7 > v6 )
    v7 = v6;
  if ( v7 <= 0 )
  {
LABEL_10:
    v14 = 0;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = (__int64 *)sub_284860(a1, v8);
      v10 = v9;
      if ( v9 )
      {
        v11 = (const char *)*v9;
        v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 16) + 464LL))(
                *(_QWORD *)(a1 + 16),
                *v9,
                v5);
        v13 = v12;
        if ( v12 != -1 )
          break;
      }
      if ( ++v8 == v7 )
        goto LABEL_10;
    }
    v16 = *(_QWORD *)(a2 + 40);
    v17 = *v10;
    if ( v16 )
    {
      v21 = v12;
      qfree(v16, v11, v12);
      *(_QWORD *)(a2 + 40) = 0;
      v13 = v21;
    }
    if ( v17 )
    {
      v22 = v13;
      *(_QWORD *)(a2 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v13 = v22;
    }
    v18 = v13;
    if ( v13 == -2 )
      v18 = *(_WORD *)(a3 + 28);
    *(_WORD *)(a2 + 28) = v18;
    *(_WORD *)(a2 + 30) = v8;
    *(_DWORD *)(a2 + 24) = -1;
    if ( a4 )
      *a4 = v10;
    v14 = 1;
  }
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v25);
  QT::QFont::~QFont((QT::QFont *)v24);
  return v14;
}
