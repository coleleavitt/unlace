__int64 __fastcall sub_C3C810(__int64 a1, unsigned __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r13d
  __int64 v17; // rdx
  char v18; // al
  unsigned int v19; // [rsp+0h] [rbp-78h] BYREF
  char v20; // [rsp+4h] [rbp-74h]
  __int64 v21; // [rsp+8h] [rbp-70h] BYREF
  unsigned int v22; // [rsp+10h] [rbp-68h]
  char v23; // [rsp+14h] [rbp-64h]

  v6 = sub_F61920(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  if ( (_BYTE)v6 )
  {
    v19 = 0;
    v20 &= ~1u;
    v12 = sub_C3C290(a2, a1, &v19, a4);
    v16 = v19;
    v10 = v12;
    if ( (_BYTE)v12 )
    {
      if ( v19 == 2 )
      {
        if ( !a3 )
          goto LABEL_12;
        if ( *(_DWORD *)(a3 + 8) <= 0x40u && v22 <= 0x40 )
        {
          v17 = v21;
          *(_DWORD *)(a3 + 8) = v22;
          v18 = v23;
          *(_QWORD *)a3 = v17;
          *(_BYTE *)(a3 + 12) = v18;
          goto LABEL_12;
        }
        sub_22056A0(a3, &v21);
        v16 = v19;
        *(_BYTE *)(a3 + 12) = v23;
      }
      else
      {
        v10 = 0;
        if ( a4 )
        {
          *a4 = sub_C00A40(a2, a1, v13, v14, v15);
          if ( v16 <= 1 )
            return v10;
          goto LABEL_12;
        }
      }
    }
    if ( v16 <= 1 )
      return v10;
LABEL_12:
    sub_A4F8E0((int *)&v19);
    return v10;
  }
  v10 = v6;
  if ( a4 )
    *a4 = sub_C00A40(a2, a2, v7, v8, v9);
  return v10;
}
