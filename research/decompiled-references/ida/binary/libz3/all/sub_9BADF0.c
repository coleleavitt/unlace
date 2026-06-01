void __fastcall sub_9BADF0(_QWORD *a1, __int64 a2)
{
  _DWORD *v2; // rax
  int v3; // eax

  if ( !*(_WORD *)(a2 + 4) )
  {
    v2 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v2 )
    {
      if ( *v2 == 5 )
      {
        v3 = v2[1];
        switch ( v3 )
        {
          case 16:
            sub_9B9F00((__int64)a1, *(unsigned int **)(a2 + 32), *(_QWORD *)(a2 + 40));
            break;
          case 15:
            sub_99AEA0(a1);
            break;
          case 10:
            sub_99ABD0(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
            break;
          case 19:
            sub_99B1A0((__int64)a1, a2);
            break;
          case 20:
            sub_99B4A0((__int64)a1, (_DWORD *)a2);
            break;
        }
      }
    }
  }
}

