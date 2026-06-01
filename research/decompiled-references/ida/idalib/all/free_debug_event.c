void __fastcall free_debug_event(__int64 a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  switch ( *(_DWORD *)(a1 + 20) & 0xFFFFFFF )
  {
    case 1:
    case 8:
    case 0xB:
      v2 = *(void **)(a1 + 24);
      if ( v2 )
      {
        *(_QWORD *)(a1 + 32) = 0;
        qfree(v2);
      }
      goto LABEL_4;
    case 3:
    case 9:
    case 0xA:
      v3 = *(void **)(a1 + 24);
      if ( !v3 )
        goto LABEL_4;
      *(_QWORD *)(a1 + 32) = 0;
      qfree(v3);
      *(_DWORD *)(a1 + 20) = 0;
      break;
    case 7:
      v4 = *(void **)(a1 + 40);
      if ( !v4 )
        goto LABEL_4;
      *(_QWORD *)(a1 + 48) = 0;
      qfree(v4);
      *(_DWORD *)(a1 + 20) = 0;
      break;
    default:
LABEL_4:
      *(_DWORD *)(a1 + 20) = 0;
      break;
  }
}
