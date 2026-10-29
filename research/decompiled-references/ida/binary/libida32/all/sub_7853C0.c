unsigned __int64 __fastcall sub_7853C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 (__fastcall *v8)(__int64, __int64, __int64, int *); // rax
  int v9; // eax
  __int64 v11; // rax
  unsigned int (__fastcall *v12)(__int64, __int64); // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v6 = *(_QWORD *)(a1 + 560);
  v16 = __readfsqword(0x28u);
  v7 = a2;
  switch ( *(_WORD *)(v6 + 24) )
  {
    case 2:
      v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(a1 + 152);
      if ( v8 )
        goto LABEL_3;
      v12 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
      if ( v12 )
        goto LABEL_15;
      *(_BYTE *)a2 = 1;
      *(_QWORD *)(a2 + 8) = 0;
      return sub_785250(a1, a2, v6, a4, a5, a6);
    case 3:
    case 5:
      a4 = *(unsigned __int8 *)(v6 + 32);
      v11 = *(int *)(v6 + 28);
      *(_BYTE *)a2 = a4;
      *(_QWORD *)(a2 + 8) = v11;
      return sub_785250(a1, a2, v6, a4, a5, a6);
    case 8:
      a4 = *(unsigned __int8 *)(v6 + 32);
      v13 = *(_QWORD *)(v6 + 40);
      *(_BYTE *)a2 = a4;
      *(_QWORD *)(a2 + 8) = v13;
      return sub_785250(a1, a2, v6, a4, a5, a6);
    case 0x28:
      return sub_7852B0(a1, a2);
    default:
      v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64, int *))(a1 + 152);
      if ( !v8 )
      {
        v12 = *(unsigned int (__fastcall **)(__int64, __int64))(a1 + 160);
        if ( v12 )
        {
LABEL_15:
          *(_BYTE *)(a1 + 572) = 0;
          *(_DWORD *)(a1 + 576) = 0;
          if ( !v12(a1, a1 + 572) )
            goto LABEL_5;
        }
LABEL_16:
        sub_77FDE0(a1);
      }
LABEL_3:
      a2 = *(_QWORD *)(a1 + 208);
      v9 = v8(a1, a2, v6, &v15);
      if ( v9 )
      {
        if ( v9 == 34 )
        {
LABEL_5:
          *(_BYTE *)(a1 + 568) = 1;
          *(_BYTE *)v7 = 1;
          *(_QWORD *)(v7 + 8) = 0;
          return v16 - __readfsqword(0x28u);
        }
        goto LABEL_16;
      }
      v14 = v15;
      *(_BYTE *)v7 = 0;
      *(_QWORD *)(v7 + 8) = v14;
      return sub_785250(a1, a2, v6, a4, a5, a6);
  }
}

