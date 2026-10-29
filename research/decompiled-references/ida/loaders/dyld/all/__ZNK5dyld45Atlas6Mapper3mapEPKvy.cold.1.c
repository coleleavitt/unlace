void __noreturn dyld4::Atlas::Mapper::map()
{
  __assert_rtn("map", "ProcessAtlas.cpp", 517, "((uint64_t)addr + size) <= mapping.address + mapping.size");
}
