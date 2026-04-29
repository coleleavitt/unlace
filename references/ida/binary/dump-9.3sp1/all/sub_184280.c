__int64 __fastcall sub_184280(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, __m128i a6)
{
  __int64 v7; // rdi
  unsigned int v8; // eax
  __int64 v10; // rbp
  __int64 (__fastcall *v11)(__int64, unsigned int); // rdx
  unsigned __int8 v14; // al
  __int64 v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  int v18; // r12d
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, unsigned int); // rax
  __int64 v22; // rax
  __int64 v23; // [rsp-10h] [rbp-78h]
  __int64 v24; // [rsp-8h] [rbp-70h]
  int v25; // [rsp+4h] [rbp-64h]
  char v26[4]; // [rsp+10h] [rbp-58h] BYREF
  int v27; // [rsp+14h] [rbp-54h]
  unsigned __int64 v28; // [rsp+28h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 480);
  v8 = *(_DWORD *)a3;
  v28 = __readfsqword(0x28u);
  v10 = *(_QWORD *)(v7 + 112);
  if ( v8 > 9 )
  {
    if ( v8 != 56 )
      return 0;
    v18 = sub_183E40(v7, a3, a5);
    if ( v18 < 0 )
      return 0;
    v19 = *(_QWORD *)(*(_QWORD *)(a3 + 72) + 24LL);
    if ( *(_BYTE *)v19 == 10 )
    {
      sub_125180(a1, *(unsigned __int8 **)(v19 + 8));
    }
    else if ( *(_BYTE *)v19 == 2 )
    {
      sub_1837D0(v10, a1, 2, *(_DWORD *)(v19 + 4), *(_QWORD *)(v19 + 8));
    }
    else
    {
      sub_1838C0(a1, (__int64 *)v10, *(_QWORD *)(a3 + 24), nullptr, v19, v18);
    }
    *(_DWORD *)(a1 + 4) = v18;
  }
  else
  {
    if ( v8 > 7 )
    {
      if ( !a5 )
        return 0;
    }
    else
    {
      v11 = (__int64 (__fastcall *)(__int64, unsigned int))((v8 - 2) & 0xFFFFFFFD);
      if ( ((v8 - 2) & 0xFFFFFFFD) != 0 )
      {
        if ( v8 != 1 )
          return 0;
        if ( (_BYTE)a4 )
        {
          if ( *(_BYTE *)(a3 + 48) != 1 )
            return 0;
          v11 = sub_183350;
          v20 = *(unsigned int *)(a3 + 56);
          v21 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v10 + 256LL);
          if ( v21 != sub_183350 )
            LODWORD(v20) = v21(*(_QWORD *)(v7 + 112), v20);
          if ( (_DWORD)v20 != *(_DWORD *)(v10 + 52)
            && (_DWORD)v20 != *(_DWORD *)(v10 + 56)
            && (_DWORD)v20 != *(_DWORD *)(v10 + 64) )
          {
            return 0;
          }
        }
        v25 = *(_DWORD *)(a3 + 36);
        sub_123A40((__int64)v26, (unsigned __int8 *)(a3 + 64), (__int64)v11, a4);
        sub_183610(*(_QWORD *)(a2 + 480), (__int64)v26);
        if ( (unsigned __int8)sub_13C7E0(a2, a1, (int *)a3, a3 + 48, (__int64)v26, 0xFFFFFFFF) )
        {
          *(_DWORD *)(a1 + 4) = v25;
          sub_11CDA0((__int64)v26);
          if ( *(_BYTE *)a1 == 2 )
            sub_1837D0(v10, a1, 2, *(_DWORD *)(a1 + 4), *(_QWORD *)(a1 + 8));
          return 1;
        }
        sub_11CDA0((__int64)v26);
        sub_1838C0(
          a1,
          (__int64 *)v10,
          *(_QWORD *)(a3 + 24),
          (unsigned __int8 *)(a3 + 48),
          a3 + 64,
          *(_DWORD *)(a3 + 36));
        goto LABEL_13;
      }
    }
    if ( (_BYTE)a4 )
    {
      v14 = *(_BYTE *)(a3 + 64);
      if ( v14 > 6u )
      {
        if ( v14 != 9 )
          return 0;
      }
      else if ( v14 <= 3u )
      {
        return 0;
      }
    }
    sub_125180(a1, (unsigned __int8 *)(a3 + 64));
  }
LABEL_13:
  if ( *(_BYTE *)a1 == 4 )
  {
    if ( !(unsigned __int8)sub_1205A0(*(_BYTE **)(a1 + 8), v10, 0, v15, v16, v17) )
    {
      if ( *(_BYTE *)a1 == 4 )
      {
        if ( (unsigned int)sub_15BC70(
                             *(unsigned int **)(a1 + 8),
                             (unsigned __int64 *)v10,
                             0,
                             0,
                             nullptr,
                             nullptr,
                             a6,
                             1u) )
        {
          v22 = *(_QWORD *)(a1 + 8);
          if ( *(_DWORD *)v22 == 2 && *(_BYTE *)(v22 + 48) == 10 )
          {
            sub_123A40((__int64)v26, *(unsigned __int8 **)(v22 + 56), v23, v24);
            v27 = *(_DWORD *)(a1 + 4);
            sub_11CA10((char *)a1, v26);
            sub_11CDA0((__int64)v26);
          }
        }
      }
      return 1;
    }
    return 0;
  }
  return 1;
}
