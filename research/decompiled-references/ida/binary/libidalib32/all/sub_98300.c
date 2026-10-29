__int64 __fastcall sub_98300(unsigned int a1, __int64 a2)
{
  __int64 bpt_kernel_interface; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  unsigned __int64 v5; // r12
  const void *v6; // r14
  void *v7; // rax

  bpt_kernel_interface = get_bpt_kernel_interface();
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bpt_kernel_interface + 40LL))(
                   bpt_kernel_interface,
                   a1);
  if ( !v3 )
    return 0;
  if ( a2 )
  {
    v4 = v3;
    *(_QWORD *)a2 = *v3;
    if ( (_QWORD *)(a2 + 8) != v3 + 1 )
    {
      v5 = v3[2];
      if ( v5 < 2 )
      {
        *(_QWORD *)(a2 + 16) = 0;
      }
      else
      {
        v6 = (const void *)v3[1];
        v7 = *(void **)(a2 + 8);
        if ( *(_QWORD *)(a2 + 24) < v5 )
        {
          v7 = (void *)qvector_reserve();
          *(_QWORD *)(a2 + 8) = v7;
        }
        *(_QWORD *)(a2 + 16) = v5;
        memmove(v7, v6, v5 - 1);
        *(_BYTE *)(*(_QWORD *)(a2 + 8) + v5 - 1) = 0;
      }
    }
    *(_QWORD *)(a2 + 32) = v4[4];
    *(_DWORD *)(a2 + 40) = *((_DWORD *)v4 + 10);
    *(_DWORD *)(a2 + 44) = *((_DWORD *)v4 + 11);
    *(_DWORD *)(a2 + 48) = *((_DWORD *)v4 + 12);
    *(_DWORD *)(a2 + 52) = *((_DWORD *)v4 + 13);
    *(_DWORD *)(a2 + 56) = *((_DWORD *)v4 + 14);
    *(_DWORD *)(a2 + 60) = *((_DWORD *)v4 + 15);
    *(_DWORD *)(a2 + 64) = *((_DWORD *)v4 + 16);
    *(_DWORD *)(a2 + 68) = *((_DWORD *)v4 + 17);
    *(_DWORD *)(a2 + 72) = *((_DWORD *)v4 + 18);
    *(_DWORD *)(a2 + 76) = *((_DWORD *)v4 + 19);
    *(_DWORD *)(a2 + 80) = *((_DWORD *)v4 + 20);
  }
  return 1;
}

