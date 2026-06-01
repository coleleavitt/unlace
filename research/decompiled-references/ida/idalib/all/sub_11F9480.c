void __fastcall sub_11F9480(__int64 a1, __int64 a2, __int64 a3)
{
  nullsub_584();
  if ( *(_DWORD *)(a1 + 48) == 3 && *(_DWORD *)(a1 + 52) == 35 )
  {
    if ( !sub_10DE660(a2, 0x67Au, 0x519u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-calls");
    if ( !sub_10DE660(a2, 0x684u, 0x523u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-returns");
    if ( !sub_10DE660(a2, 0x680u, 0x51Fu) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-intrinsics");
    if ( !sub_10DE660(a2, 0x67Du, 0x51Cu) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-indirect-gotos");
    if ( !sub_10DE660(a2, 0x678u, 0x517u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-auth-traps");
    if ( !sub_10DE660(a2, 0x686u, 0x525u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-vtable-pointer-address-discrimination");
    if ( !sub_10DE660(a2, 0x687u, 0x526u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-vtable-pointer-type-discrimination");
    if ( !sub_10DE660(a2, 0x683u, 0x522u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-objc-isa");
    if ( !sub_10DE660(a2, 0x681u, 0x520u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-objc-class-ro");
    if ( !sub_10DE660(a2, 0x682u, 0x521u) )
      sub_10DC5D0(a3, (__int64)"-fptrauth-objc-interface-sel");
  }
}
