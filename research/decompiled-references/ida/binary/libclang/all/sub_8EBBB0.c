__int64 __fastcall sub_8EBBB0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v6; // esi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  void *v11; // rax
  __int64 v12; // rdi
  void *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  void *v21; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v22; // [rsp+8h] [rbp-20h]
  char v23; // [rsp+Ch] [rbp-1Ch]

  v6 = *(_DWORD *)(a1 + 816);
  switch ( v6 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v12 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v13 = (void *)*(unsigned __int8 *)sub_A1A5A0(v12, 8);
        v22 = 8;
        goto LABEL_22;
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v14 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (void *)*(unsigned __int8 *)sub_A1A5A0(v14, 8);
        v22 = 8;
        goto LABEL_18;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v15 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v13 = (void *)*(unsigned __int16 *)sub_A1A5A0(v15, 8);
        v22 = 16;
        goto LABEL_22;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v16 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (void *)*(unsigned __int16 *)sub_A1A5A0(v16, 8);
        v22 = 16;
        goto LABEL_18;
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v17 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v13 = (void *)*(unsigned int *)sub_A1A5A0(v17, 8);
        v22 = 32;
        goto LABEL_22;
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v18 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (void *)*(unsigned int *)sub_A1A5A0(v18, 8);
        v22 = 32;
        goto LABEL_18;
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v19 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v13 = *(void **)sub_A1A5A0(v19, 8);
        v22 = 64;
LABEL_22:
        v21 = v13;
        v23 = 0;
        if ( (unsigned __int8)sub_A1AD60(v9) )
          goto LABEL_19;
        goto LABEL_23;
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v20 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = *(void **)sub_A1A5A0(v20, 8);
        v22 = 64;
        goto LABEL_18;
      }
      break;
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 812) == v6 )
      {
        v8 = *(_QWORD *)(a1 + 568);
        v9 = a1 + 384;
        v10 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (void *)*(unsigned __int8 *)sub_A1A5A0(v8, 8);
        v22 = 1;
LABEL_18:
        v21 = v11;
        v23 = 1;
        if ( (unsigned __int8)sub_A1AD60(v9) )
LABEL_19:
          sub_9C7F00(v9, v10, a3, &v21);
LABEL_23:
        if ( v22 > 0x40 && v21 )
          operator delete[](v21);
      }
      break;
  }
  return 1;
}

